class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int rsum = 0 , lsum = 0;
        
        for(auto i : nums)
            rsum += i;
        
        
        vector<int> ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            rsum -= nums[i];
            ans[i] = abs(lsum-rsum);
            lsum += nums[i];
        }
        
        return ans;
    }
};