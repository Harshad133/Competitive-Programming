class Solution {
public:
    void permution(vector<int> nums, vector<int> per , vector<vector<int>> &res , vector<bool> freq){
        if(per.size() == nums.size()){
            res.push_back(per);
            return;
        }

        for(int i = 0 ; i < freq.size() ; i++){
            if(freq[i] == false){
                freq[i] = true;
                per.push_back(nums[i]);
                permution(nums,per,res,freq);
                per.pop_back();
                freq[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> res;
        vector<bool> freq(nums.size(),false);
       permution(nums,{},res,freq);

       return res;
    }
};