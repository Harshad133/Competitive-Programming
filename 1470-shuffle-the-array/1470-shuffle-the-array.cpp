class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        for(int s1 = 0 , s2 = n ; s1 < n ; s1++,s2++){
            ans.push_back(nums[s1]);
            ans.push_back(nums[s2]);
        }

        return ans;
    }
};