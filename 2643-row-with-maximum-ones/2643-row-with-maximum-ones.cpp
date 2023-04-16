class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOnes = 0 , index = 0;
        
        for(int i = 0 ; i < mat.size();i++){
            int ones = 0;
            for(int j = 0 ; j < mat[0].size();j++){
                if(mat[i][j] == 1)
                    ones++;
            }
            
            if(ones > maxOnes){
                maxOnes = ones;
                index = i;
            } 
        }
        
        return {index,maxOnes};
    }
};