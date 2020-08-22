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

BinaryTreeNode<int> *printBinaryTreeLevelWise(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return;
  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0)
  {
    BinaryTreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();
    cout << front->data << ":";

    if (front->left)
    {
      BinaryTreeNode<int> *child = front->left;
      cout << "L:" << child->data << ",";
      pendingNodes.push(child);
    }
    else
      cout << "-1"
           << ",";

    if (front->right)
    {
      BinaryTreeNode<int> *child = front->right;
      cout << "L:" << child->data << ",";
      pendingNodes.push(child);
    }
    else
      cout << "-1"
           << ",";

    cout << endl;
  }
}

int countNodes(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return 0;

  return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
  if (root == NULL)
    return false;

  if (root->data == x)
    return true;

  return isNodePresent(root->left, x) || isNodePresent(root->right, x);
}

int height(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return 0;

  return 1 + max(height(root->left), height(root->right));
}

void mirrorBinaryTree(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return;
  if (root->left == NULL && root->right == NULL)
    return;

  mirrorBinaryTree(root->left);
  mirrorBinaryTree(root->right);

  BinaryTreeNode<int> *temp = root->left;
  root->left = root->right;
  root->right = temp;
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