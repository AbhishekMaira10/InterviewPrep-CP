#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int> *takeInputRecursive() {}

void printBinaryTree(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return;

  cout << root->data << ":";
  if (root->left != NULL)
  {
    cout << "L" << root->left->data << " ";
  }
  if (root->right != NULL)
  {
    cout << "R" << root->right->data;
  }
  cout << endl;
  printBinaryTree(root->left);
  printBinaryTree(root->right);
}

int main()
{
  /*
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
  BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
  BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
  */

  BinaryTreeNode<int> *root = takeInputRecursive();

  printBinaryTree(root);
  delete root;
}