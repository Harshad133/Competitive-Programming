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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;

        if(root == NULL)
            return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();

            vector<int> temp;
            for(int  i = 0 ; i < n ; i++){
                temp.push_back(q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }

            res.push_back(temp);
        }
        
        reverse(res.begin(),res.end());

        return res;
    }
};