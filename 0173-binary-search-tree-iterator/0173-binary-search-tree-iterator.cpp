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
void travel(vector<int> &tra , TreeNode* root){
    if(root == NULL)
        return;

    travel(tra,root->left);
    tra.push_back(root->val);
    travel(tra,root->right);
}

class BSTIterator {
private:
    vector<int> tra;
    int index;
public:
    BSTIterator(TreeNode* root) {
        travel(tra,root);
        index = 0;
    }
    
    int next() {
        index++;

        return tra[index-1];
    }
    
    bool hasNext() {
        if(index < tra.size())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */