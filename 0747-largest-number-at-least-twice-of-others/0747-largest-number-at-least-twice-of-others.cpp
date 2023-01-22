class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int x = *max_element(nums.begin(),nums.end());
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==x) continue;
            int temp = 2*nums[i];
            if(temp>x) return -1;
        }
        auto it = find(nums.begin(),nums.end(),x);
        return it - nums.begin();

    }
};