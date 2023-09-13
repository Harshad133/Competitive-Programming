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
    // void travel(TreeNode* root , vector<int> &ans){
    //     if(root == NULL)
    //         return;

    //     travel(root->left,ans);
    //     travel(root->right,ans);
    //     ans.push_back(root->val);
    // }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode *curr = root , *temp;

        stack<TreeNode*> st;

        while(curr != NULL || !st.empty()){
            if(curr != NULL){
                st.push(curr);
                curr= curr->left;
            }
            else{
                temp = st.top()->right;
                if(temp == NULL){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);

                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else
                    curr = temp;
            }
        }
        
        return ans;
    }
};