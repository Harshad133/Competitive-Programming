class Solution {
public:
    void subsets(int i,vector<int> nums,vector<int> com,vector<vector<int>> &res){
        res.push_back(com);
      
        for(int j = i ; j < nums.size() ; j++){
            if(j > i && nums[j]==nums[j-1]) continue;

            com.push_back(nums[j]);
            subsets(j+1,nums,com,res);
            com.pop_back();
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());

        subsets(0,nums,{},res);

        return res;
    }
};