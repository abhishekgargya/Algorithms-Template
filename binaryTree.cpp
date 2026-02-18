#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data) {
        val = data;
        left = right = nullptr;
    }
};

// Function to build a binary tree from edge list
TreeNode* buildTree(int e, vector<pair<int, int>>& edges) {
    unordered_map<int, TreeNode*> nodes;  // Store existing nodes
    TreeNode* root = nullptr;

    for (int i = 0; i < e; i++) {
        int u = edges[i].first, v = edges[i].second;

        // Create parent node if not already present
        if (nodes.find(u) == nodes.end()) {
            nodes[u] = new TreeNode(u);
            if (!root) root = nodes[u];  // Assign first node as root
        }

        // Create child node if not already present
        if (nodes.find(v) == nodes.end()) {
            nodes[v] = new TreeNode(v);
        }

        // Attach child to parent
        if (!nodes[u]->left)
            nodes[u]->left = nodes[v];
        else
            nodes[u]->right = nodes[v];
    }

    return root;
}

// Function to perform inorder traversal
void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    int n, e;
    cin >> n >> e;  // Read number of nodes and edges

    vector<pair<int, int>> edges(e);
    for (int i = 0; i < e; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    TreeNode* root = buildTree(e, edges);  // Build the tree

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
