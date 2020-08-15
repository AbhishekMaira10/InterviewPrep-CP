#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root Data";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of" << front->data;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

void printTreeLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
        return;

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++)
        {
            if (i < ((front->children.size()) - 1))
                cout << front->children[i]->data << ",";
            else
                cout << front->children[i]->data;
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
}

TreeNode<int> *takeInputRecusive()
{
    int rootData;
    cout << "Enter Data";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter number of children of" << rootData << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInputRecusive();
        root->children.push_back(child);
    }

    return root;
}

void printTreeRecursive(TreeNode<int> *root)
{

    if (root == NULL)
        return;
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
        cout << root->children[i]->data << ",";
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTreeRecursive(root->children[i]);
    }
}

int numNodes(TreeNode<int> *root)
{
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
        count += numNodes(root->children[i]);
    return count;
}

int sumOfNodes(TreeNode<int> *root)
{
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
        sum += sumOfNodes(root->children[i]);
    return sum;
}

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    if (root == NULL)
        return root;
    TreeNode<int> *max = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *max1 = maxDataNode(root->children[i]);
        if (max1->data > max->data)
            max = max1;
    }
    return max;
}

int height(TreeNode<int> *root)
{
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int childHeight = height(root->children[i]);
        if (childHeight > ans)
            ans = childHeight;
    }
    return ans + 1;
}

void printAtLevelK(TreeNode<int> *root, int k)
{
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
        printAtLevelK(root->children[i], k - 1);
}

int numLeafNodes(TreeNode<int> *root)
{
    int count = 0;
    if (root->children.size() == 0)
        count++;
    for (int i = 0; i < root->children.size(); i++)
        count += numLeafNodes(root->children[i]);
    return count;
}

void preOrder(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    for (int i = 0; i < root->children.size(); i++)
        preOrder(root->children[i]);
}

void postOrder(TreeNode<int> *root)
{
    if (root == NULL)
        return;
    for (int i = 0; i < root->children.size(); i++)
        postOrder(root->children[i]);
    cout << root->data << " ";
}

void deleteTree(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
        deleteTree(root->children[i]);
    delete root;
}

bool containsX(TreeNode<int> *root, int x)
{
    if (root->data == x)
        return true;
    for (int i = 0; i < root->children.size(); i++)
    {
        bool ans = containsX(root->children[i], x);
        if (ans == true)
            return true;
    }
    return false;
}

int nodesGreaterThanX(TreeNode<int> *root, int x)
{
    int count = 0;
    if (root->data > x)
        count++;
    for (int i = 0; i < root->children.size(); i++)
        count += nodesGreaterThanX(root->children[i], x);
    return count;
}

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    TreeNode<int> *ans = root;
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum = sum + root->children[i]->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *x;
        x = maxSumNode(root->children[i]);
        int xsum = x->data;
        for (int j = 0; j < x->children.size(); j++)
        {
            xsum = xsum + x->children[j]->data;
        }
        if (xsum > sum)
        {
            sum = xsum;
            ans = x;
        }
    }
    return ans;
}

TreeNode<int> *nextLargerElement(TreeNode<int> *root, int n)
{
    if (root == NULL)
        return root;

    TreeNode<int> *ans = NULL;
    if (root->data > n)
        ans = root;

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *temp = nextLargerElement(root->children[i], n);
        if (ans == NULL)
            ans = temp;
        else if (temp != NULL && temp->data < ans->data)
            ans = temp;
    }
    return ans;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTreeLevelWise(root);
    cout << numNodes(root);
    // deleteTree(root);
    delete root;
}
