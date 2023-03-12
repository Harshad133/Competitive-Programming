class Solution {
public:
    int maxScore(vector<int>& nums) {      
      sort(nums.rbegin(),nums.rend());
        long long sum = 0,ans=0;
        for(int x:nums)
        {
            sum+=x;
            ans+=(sum>0);
        }
        return ans;
    }
};