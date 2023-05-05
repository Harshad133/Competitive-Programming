class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ocur(n,0);
        vector<int> res;
        
        for(auto i : nums)
            ocur[i-1]++;
        
        for(int i = 0 ; i < n ; i++){
            if(ocur[i]==0)
                res.push_back(i+1);
        }
        
        return res;
    }
};