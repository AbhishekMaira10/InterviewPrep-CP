#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter root Data";
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data<< endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cout<< "Enter " << i << "th child of" << front->data;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

void printTree(TreeNode<int>* root) {
    if (root == NULL)
        return;

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data<< ":";

        for (int i = 0; i < front->children.size(); i++) {
            if (i < ((front->children.size()) - 1))
                cout << front->children[i]->data << ",";
            else
                cout << front->children[i]->data;
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
}

int numNodes(TreeNode<int>* root) {
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
        count += numNodes(root->children[i]);
    return count;
}

int sumOfNodes(TreeNode<int>* root) {
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
        sum += sumOfNodes(root->children[i]);
    return sum;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if (root == NULL)
        return root;
    TreeNode<int>* max = root;
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* max1 = maxDataNode(root->children[i]);
        if (max1->data > max->data)
            max = max1;
    }
    return max;
}

int height(TreeNode<int>* root) {
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++) {
        int childHeight = height(root->children[i]);
        if (childHeight > ans)
            ans = childHeight;
    }
    return ans + 1;
}


int main() {
    TreeNode<int>* root = takeInput();
    printTree(root);
    cout << numNodes(root);
}