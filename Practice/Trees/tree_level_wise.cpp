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

int main() {
    TreeNode<int>* root = takeInput();

}