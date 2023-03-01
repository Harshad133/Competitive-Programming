class Solution {
public:
    void genComb(int i , int n , int k , vector<int> com , vector<vector<int>> &res){
            if(com.size() == k){
                res.push_back(com);
                return;
            }

        for(int j = i ; j < n+1 ; j++){
            com.push_back(j);
            genComb(j+1,n,k,com,res);
            com.pop_back();
        }
       
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        genComb(1,n,k,{},res);
        
        return res;
    }
};