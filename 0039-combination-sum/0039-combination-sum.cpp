class Solution {
public:
    
    void combination(int i,vector<int> c,int target,vector<int> com,vector<vector<int>> &res){
        if(i >= c.size()){
            if(target == 0)
                res.push_back(com);
            return;
        }
                                                                                 
        if(c[i] <= target){
            com.push_back(c[i]);
            combination(i,c,target-c[i],com,res);
            com.pop_back();
        }

        combination(i+1,c,target,com,res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;

        combination(0,candidates,target,{},res);

        return res;
    }
};