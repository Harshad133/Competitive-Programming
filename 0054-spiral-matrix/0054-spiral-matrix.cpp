class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

         if(matrix.size() == 0) 
            return res;
        int rs = 0, re = matrix.size() - 1, cs = 0, ce = matrix[0].size() - 1;
        while(rs <= re && cs <= ce)
        {
            for(int i = cs; i <= ce; i++) 
             res.push_back(matrix[rs][i]);
            rs++;
            for(int i = rs; i <= re; i++) 
             res.push_back(matrix[i][ce]);
            ce--;
            for(int i = ce; i >= cs && rs <= re; i--) 
             res.push_back(matrix[re][i]);
            re--;
            for(int i = re; i >= rs && cs <= ce; i--) 
             res.push_back(matrix[i][cs]);
            cs++;
        }
        return res;
    }
};