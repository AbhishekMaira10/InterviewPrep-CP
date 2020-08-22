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

BinaryTreeNode<int> *takeInputLevelWise()
{
  int rootData;
  cout << "Enter root data";
  cin >> rootData;
  if (rootData == -1)
    return NULL;

  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0)
  {
    BinaryTreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();

    cout << "Enter left child of " << front->data;
    int leftChildData;
    cin >> leftChildData;
    if (leftChildData != -1)
    {
      BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
      front->left = child;
      pendingNodes.push(child);
    }

    cout << "Enter right child of " << front->data;
    int rightChildData;
    cin >> rightChildData;

    if (rightChildData != -1)
    {
      BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
      front->left = child;
      pendingNodes.push(child);
    }
  }
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