/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void pathTree(TreeNode *root , string path , vector<string> &paths)
    {
        if(root == NULL)
            return;

        if(root->left == NULL && root->right == NULL){
            path = path + to_string(root->val);
            paths.push_back(path);
            return;
        }

        path = path + to_string(root->val) + "->";
        pathTree(root->left,path,paths);
        pathTree(root->right,path,paths);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;

        pathTree(root,"",paths);

        return paths;
    }
};