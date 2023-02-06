class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;

        for(int n = 0 ; n < (1 << nums.size()) ; n++){
            vector<int> temp;

            for(int i = 0 ; i < nums.size() ; i++){
                if((n & (1 << i)) != 0)
                    temp.push_back(nums[i]);
            }

            res.push_back(temp);
            temp.clear();
        }

        return res;
    }
};