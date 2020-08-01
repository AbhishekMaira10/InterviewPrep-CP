#include <iostream> 
#include <queue> 
using namespace std; 
class Node { 
public: 
int val;
char color;
Node *left, *right, *parent; 

Node(int val) : val(val) { 
	parent = left = right = NULL;  
	color = 'R'; 
} 

Node *uncle() { 
	
	if (parent == NULL or parent->parent == NULL) 
	return NULL; 

	if (parent->isOnLeft()) 

	return parent->parent->right; 
	else

	return parent->parent->left; 
} 
 
bool isOnLeft() { return this == parent->left; } 
Node *sibling() { 
	if (parent == NULL) 
	return NULL; 

	if (isOnLeft()) 
	return parent->right; 

	return parent->left; 
}  
void moveDown(Node *nParent) { 
	if (parent != NULL) { 
	if (isOnLeft()) { 
		parent->left = nParent; 
	} else { 
		parent->right = nParent; 
	} 
	} 
	nParent->parent = parent; 
	parent = nParent; 
} 

bool hasRedChild() { 
	return (left != NULL and left->color == 'R') or 
		(right != NULL and right->color == 'R'); 
} 
}; 

class RBTree { 
Node *root; 


void leftRotate(Node *x) { 
 
	Node *nParent = x->right; 
 
	if (x == root) 
	root = nParent; 

	x->moveDown(nParent); 

	x->right = nParent->left; 

	if (nParent->left != NULL) 
	nParent->left->parent = x; 

	nParent->left = x; 
} 

void rightRotate(Node *x) { 
	 
	Node *nParent = x->left; 

	// update root if current node is root 
	if (x == root) 
	root = nParent; 

	x->moveDown(nParent);  
	x->left = nParent->right; 

	if (nParent->right != NULL) 
	nParent->right->parent = x; 

	
	nParent->right = x; 
} 

void swapColors(Node *x1, Node *x2) { 
	char temp; 
	temp = x1->color; 
	x1->color = x2->color; 
	x2->color = temp; 
} 

void swapValues(Node *u, Node *v) { 
	int temp; 
	temp = u->val; 
	u->val = v->val; 
	v->val = temp; 
} 

void fixRedRed(Node *x) { 
	if (x == root) { 
	x->color = 'B'; 
	return; 
	} 
	Node *parent = x->parent, *grandparent = parent->parent, 
		*uncle = x->uncle(); 

	if (parent->color != 'B') { 
	if (uncle != NULL && uncle->color == 'R') {  
		parent->color = 'B'; 
		uncle->color = 'B'; 
		grandparent->color = 'R'; 
		fixRedRed(grandparent); 
	} else { 
	 
		if (parent->isOnLeft()) { 
		if (x->isOnLeft()) { 
			
			swapColors(parent, grandparent); 
		} else { 
			leftRotate(parent); 
			swapColors(x, grandparent); 
		} 
		// for left left and left right 
		rightRotate(grandparent); 
		} else { 
		if (x->isOnLeft()) { 
			// for right left 
			rightRotate(parent); 
			swapColors(x, grandparent); 
		} else { 
			swapColors(parent, grandparent); 
		} 

		// for right right and right left 
		leftRotate(grandparent); 
		} 
	} 
	} 
} 

// find node that do not have a left child 
// in the subtree of the given node 
Node *successor(Node *x) { 
	Node *temp = x; 

	while (temp->left != NULL) 
	temp = temp->left; 

	return temp; 
} 

// find node that replaces a deleted node in BST 
Node *BSTreplace(Node *x) { 
	// when node have 2 children 
	if (x->left != NULL and x->right != NULL) 
	return successor(x->right); 

	// when leaf 
	if (x->left == NULL and x->right == NULL) 
	return NULL; 

	// when single child 
	if (x->left != NULL) 
	return x->left; 
	else
	return x->right; 
} 

// deletes the given node 
void deleteNode(Node *v) { 
	Node *u = BSTreplace(v); 

	// True when u and v are both black 
	bool uvBlack = ((u == NULL or u->color == 'B') and (v->color == 'B')); 
	Node *parent = v->parent; 

	if (u == NULL) { 
	// u is NULL therefore v is leaf 
	if (v == root) { 
		// v is root, making root null 
		root = NULL; 
	} else { 
		if (uvBlack) { 
		// u and v both black 
		// v is leaf, fix double black at v 
		fixDoubleBlack(v); 
		} else { 
		// u or v is red 
		if (v->sibling() != NULL) 
			// sibling is not null, make it red" 
			v->sibling()->color = 'R'; 
		} 

		// delete v from the tree 
		if (v->isOnLeft()) { 
		parent->left = NULL; 
		} else { 
		parent->right = NULL; 
		} 
	} 
	delete v; 
	return; 
	} 

	if (v->left == NULL or v->right == NULL) { 
	// v has 1 child 
	if (v == root) { 
		// v is root, assign the value of u to v, and delete u 
		v->val = u->val; 
		v->left = v->right = NULL; 
		delete u; 
	} else { 
		// Detach v from tree and move u up 
		if (v->isOnLeft()) { 
		parent->left = u; 
		} else { 
		parent->right = u; 
		} 
		delete v; 
		u->parent = parent; 
		if (uvBlack) { 
		// u and v both black, fix double black at u 
		fixDoubleBlack(u); 
		} else { 
		// u or v red, color u black 
		u->color = 'B'; 
		} 
	} 
	return; 
	} 

	// v has 2 children, swap values with successor and recurse 
	swapValues(u, v); 
	deleteNode(u); 
} 

void fixDoubleBlack(Node *x) { 
	if (x == root) 
	// Reached root 
	return; 

	Node *sibling = x->sibling(), *parent = x->parent; 
	if (sibling == NULL) { 
	// No sibiling, double black pushed up 
	fixDoubleBlack(parent); 
	} else { 
	if (sibling->color == 'R') { 
		// Sibling red 
		parent->color = 'R'; 
		sibling->color = 'B'; 
		if (sibling->isOnLeft()) { 
		// left case 
		rightRotate(parent); 
		} else { 
		// right case 
		leftRotate(parent); 
		} 
		fixDoubleBlack(x); 
	} else { 
		// Sibling black 
		if (sibling->hasRedChild()) { 
		// at least 1 red children 
		if (sibling->left != NULL and sibling->left->color == 'R') { 
			if (sibling->isOnLeft()) { 
			// left left 
			sibling->left->color = sibling->color; 
			sibling->color = parent->color; 
			rightRotate(parent); 
			} else { 
			// right left 
			sibling->left->color = parent->color; 
			rightRotate(sibling); 
			leftRotate(parent); 
			} 
		} else { 
			if (sibling->isOnLeft()) { 
			// left right 
			sibling->right->color = parent->color; 
			leftRotate(sibling); 
			rightRotate(parent); 
			} else { 
			// right right 
			sibling->right->color = sibling->color; 
			sibling->color = parent->color; 
			leftRotate(parent); 
			} 
		} 
		parent->color = 'B'; 
		} else { 
		// 2 black children 
		sibling->color = 'R'; 
		if (parent->color == 'B') 
			fixDoubleBlack(parent); 
		else
			parent->color = 'B'; 
		} 
	} 
	} 
} 


// prints inorder recursively 
void inorder(Node *x) { 
	if (x == NULL) 
	return; 
	inorder(x->left); 
	cout << x->val << " "<<x->color<<" "; 
	inorder(x->right); 
}
void preorder(Node *x) { 
	if (x == NULL) 
	return; 
    cout << x->val << " "<<x->color<<" "; 
	preorder(x->left); 
	preorder(x->right); 
} 
void postorder(Node *x) { 
	if (x == NULL) 
	return; 
	postorder(x->left); 
	postorder(x->right);
    cout << x->val << " "<<x->color<<" ";  
}  

public: 
// constructor 
// initialize root 
RBTree() { root = NULL; } 

Node *getRoot() { return root; } 

// searches for given value 
// if found returns the node (used for delete) 
// else returns the last node while traversing (used in insert) 
Node *search(int n) { 
	Node *temp = root; 
	while (temp != NULL) { 
	if (n < temp->val) { 
		if (temp->left == NULL) 
		break; 
		else
		temp = temp->left; 
	} else if (n == temp->val) { 
		break; 
	} else { 
		if (temp->right == NULL) 
		break; 
		else
		temp = temp->right; 
	} 
	} 

	return temp;
} 

// inserts the given value to tree 
void insert(int n) { 
	Node *newNode = new Node(n); 
	if (root == NULL) { 
	// when root is null 
	// simply insert value at root 
	newNode->color = 'B'; 
	root = newNode; 
	} else { 
	Node *temp = search(n); 

	if (temp->val == n) { 
		// return if value already exists 
		return; 
	} 

	// if value is not found, search returns the node 
	// where the value is to be inserted 

	// connect new node to correct node 
	newNode->parent = temp; 

	if (n < temp->val) 
		temp->left = newNode; 
	else
		temp->right = newNode; 

	// fix red red voilaton if exists 
	fixRedRed(newNode); 
	} 
} 

// utility function that deletes the node with given value 
void deleteByVal(int n) { 
	if (root == NULL) 
	// Tree is empty 
	return; 

	Node *v = search(n), *u; 

	if (v->val != n) { 
	cout << "No node found to delete with value:" << n << endl; 
	return; 
	} 

	deleteNode(v); 
} 

// prints inorder of the tree 
void printInOrder() { 
	if (root == NULL) 
	cout << "Tree is empty" << endl; 
	else
	inorder(root); 
	cout << endl; 
} 

void printPostOrder() {  
	if (root == NULL) 
	cout << "Tree is empty" << endl; 
	else
	postorder(root); 
	cout << endl; 
}

void printPreOrder() { 
	if (root == NULL) 
	cout << "Tree is empty" << endl; 
	else
	preorder(root); 
	cout << endl; 
}

}; 

int main() { 
    int t;
    cin>>t;
    RBTree tree;
     char q;
     int x; 
    while(t--)
    {
        cin>>q>>x;
        if(q=='i')
        tree.insert(x);
        else if(q=='d')
        tree.deleteByVal(x);
    }
tree.printPreOrder(); 
tree.printInOrder();
tree.printPostOrder();
return 0; 
} 
