#include<iostream>
#include<stack>
using namespace std;
class Binarytreenode
{
	int data;
	Binarytreenode*left;
    Binarytreenode*right;
    Binarytreenode(int data)
    {
    	this->data=data;
    	left=NULL;
    	right=NULL;
	}
	
};
void printtree(Binarytreenode*root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	if(root->left!=NULL)
	{
		printtree(root->left);
	}
	if(root->right!=NULL)
	{
		printtree(root->right);
	}
}
void printtreepost(Binarytreenode*root)
{
	if(root==NULL)
	{
		return;
	}
	
	if(root->left)
	{
		printtree(root->left);
	}
	if(root->right)
	{
		printtree(root->right);
	}
	cout<<root->data<<" ";
}
int minimum(Binarytreenode*root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		return root->data;
	}
	if(root->left)
	int x=minimum(root->left);
	if(root->right)
	int y=minimum(root->right);
	return min(root->data,min(x,y));
}
bool isomorphic()
{
	if(root1==NULL&&root2==NULL)
	{
		return true;
	}
	if(root1==NULL&&root2!=NULL)
	{
		return false;
	}
	if(root1!=NULL&&root2==NULL)
	{
		return false;
	}
	bool x=
	
}
bool mirror(Binarytreenode<int>*root1,Binarytreenode<int>*root2)
{
	if(root1==NULL&&root2==NULL)
	{
		return true;
	}
	if(root1==NULL&&root2!=NULL)
	{
		return false;
	}
	bool x=mirror(root->left,root->right);
	bool y=mirror(root-right,root->left);
	
}
Binarytreenode*deletenode(Binarytreenode*root,int data1)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data<data1)
	{
		root->right=deletenode(root->right,data1);
	}
	else if(root->data>data1)
	{
		root->left=deletenode(root->left,data1);
	}
	else
	{
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			return NULL;
		}
		else  if(root->left==NULL&&root->right!=NULL)
		{
			Binarytreenode*temp=root->right;
			root->right=NULL;
			delete root;
			return temp;
		}
		else  if(root->left!=NULL&&root->right==NULL)
		{
			Binarytreenode*temp=root->left;
			root->left=NULL;
			delete root;
			return temp;
		}
		else
		{
			Binarytreenode*minnode=root->right;
			while(minnode->left==NULL)
			{
				minnode=minnode->left;
			}
			int rightmin=minnode->data;
			root->data=rightmin;
			root->right=deletenode(root->right,rightmin);
			return root;
		}
	}
	
	
}
void printtree(Binarytreenode*root)
{
	stack<Binarytreenode*>pendingnodes;
	Binarytreenode*current=root;
	while(current!=NULL||pendingnodes.empty()==false)
	{
		
		while(current!=NULL)
		{
			pendingnodes.push(current);
			current=current->left;
		}
		Binarytreenode*current=pendingnodes.top();
		cout<<current->data<<" ";
		pendingnodes.pop();
		current=current->right;
	}
}

Binarytreenode*insertnode(Binarytreenode*root,int data1)
{
	if(root==NULL)
	{
		Binarytreenode*node=new Binarytreenode(data1);
		return node;
	}
	if(root->data<data1)
	{
		root->right=insertnode(root->right,data1)
	}
}
int height(Binarytreenode*root)
{
	if(root==NULL)
	{
		return 0;
	}
	int x=height(root->left);
	int y=height(root->right);
	return 1+max(x,y);
}
int sumnodes(Binarytreenode*root)
{
	if(root==NULL)
		return 0;
	return root->data+sumnodes(root->left)+sumnodes(root->right);
}

int main()
{
	Binarytreenode*root=new Binarytreenode(32);
   Binarytreenode*lefttree=new Binarytreenode(45);
   Binarytreenode*righttree=new Binarytreenode(36);
   root->left=lefttree;
   root->right=rightree;
   int x=5;
   print(x);
   printtree(root);
	return 0;
}
