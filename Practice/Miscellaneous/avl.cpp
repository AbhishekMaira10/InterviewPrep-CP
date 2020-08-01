#include<bits/stdc++.h>
using namespace std;
class AVLTree
{
    public:
    int data;
    AVLTree* left;
    AVLTree* right;
    int height;
     AVLTree(int data)
     {
         this->data=data;
          left =NULL;
          right=NULL;
          height=1;
     }
};
int max(int a,int b)
{
    return (a>b)?a:b;
}
int height(AVLTree* n)
{
    if(n==NULL)
    return 0;
    return n->height;
}
int getBalance(AVLTree* n)
{
    if(n==NULL)
    return 0;
    return height(n->left)-height(n->right);
}

AVLTree* leftRotate(AVLTree* y)
{
    AVLTree* x = y->right;
    AVLTree* t2=x->left;
    x->left=y;
    y->right=t2;
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;

}
AVLTree* rightRotate(AVLTree* y)
{
    AVLTree* x = y->left;
    AVLTree* t2=x->right;
    x->right=y;
    y->left=t2;
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}
AVLTree* insert(AVLTree* root, int data1)
{
    if(root==NULL)
    {
        AVLTree* node = new AVLTree(data1);
        return node;
    }
    if (data1< root->data)  
        root->left = insert(root->left,data1);  
    else if (data1 > root->data)  
        root->right = insert(root->right,data1); 
        
    root->height = 1 + max(height(root->left),height(root->right));
    int balance = getBalance(root);

    if (balance > 1 && data1 < root->left->data)  
        return rightRotate(root);  

    if (balance < -1 && data1 > root->right->data)  
        return leftRotate(root); 

    if (balance > 1 && data1 > root->left->data)  
    {  
        root->left = leftRotate(root->left);  
        return rightRotate(root);  
    } 

    if (balance < -1 && data1 < root->right->data)  
    {  
        root->right = rightRotate(root->right);  
        return leftRotate(root);  
    }  

    return root;
}
AVLTree* minValueNode(AVLTree* root)  
{  
   AVLTree* current = root; 

    while (current->left != NULL)  
        current = current->left;  
     return current;  
}  

AVLTree * deleteNode(AVLTree * root,int data1)
{
    
    return root;
}
void preOrder(AVLTree *root)  
{  
    if(root != NULL)  
    {  
        cout << root->data << " ";  
        preOrder(root->left);  
        preOrder(root->right);  
    }  
}  
void inOrder(AVLTree  *root)  
{  
    if(root != NULL)  
    {  
        inOrder(root->left);
        cout << root->data << " ";  
          
        inOrder(root->right);  
    }  
}
void postOrder(AVLTree  *root)  
{  
    if(root != NULL)  
    {  
        
        postOrder(root->left);  
        postOrder(root->right); 
         cout << root->data << " ";  
    }  
} 
int main()
{
    AVLTree *root = NULL;  
    int t;
    cin>>t;
    while(t--){
        char c;
        int num;
        cin>>c>>num;
        if(c=='i') root = insert(root, num);  
        else if(c=='d') root=deleteNode(root,num);
       } 
    preOrder(root); 
    cout<<endl;   
    inOrder(root); 
    cout<<endl;  
    postOrder(root);       
    return 0;
}