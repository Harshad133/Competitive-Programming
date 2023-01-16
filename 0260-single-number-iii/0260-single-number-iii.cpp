class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long int nxor = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            nxor ^= nums[i];
        }
        
        int rmb = nxor & ~(nxor-1);
        
        int x = 0 , y = 0;
        
        
        for(int i = 0 ; i < nums.size() ; i++){
            if((nums[i] & rmb) == 0)
                x ^= nums[i];
            else
                y ^= nums[i];
        }
        
        vector<int> ans{max(x,y),min(x,y)};
        
        return ans;
    }
};