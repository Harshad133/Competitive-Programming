class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int sub = 0 , ans = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                sub++;
                ans += sub;
            }
            else
                sub = 0;
        }
        
        return ans;
    }
};