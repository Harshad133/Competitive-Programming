class Solution {
public:
    void combination(int i,int target,vector<int> c,vector<int> com,vector<vector<int>> &res){
        
        if(target == 0){
            res.push_back(com);
            return;
        }
        

        for(int j = i ; j < c.size() ; j++){
            if(j > i && c[j]==c[j-1]) continue;

            if(c[j] > target) break;

            com.push_back(c[j]);
            combination(j+1,target-c[j],c,com,res);
            com.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());

        combination(0,target,candidates,{},res);

        return res;
    }
};