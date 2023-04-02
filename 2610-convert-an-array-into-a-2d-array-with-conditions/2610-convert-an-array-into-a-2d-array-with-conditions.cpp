class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> ocur;
      
        for(auto i : nums)
            ocur[i]++;
      
        vector<vector<int>> res;
        bool run = true;
        
        while(run){
            run = false;
            res.push_back(vector<int>());
            for(auto i = ocur.begin() ; i != ocur.end() ; i++){
                if(i->second != 0){
                    (res.back()).push_back(i->first);
                    i->second--;
                    
                    // cout<<i->first<<" "<<i->second<<endl;
                    run = true;
                }
            }
        }
        
        res.pop_back();
        
        return res;
        
    }
};