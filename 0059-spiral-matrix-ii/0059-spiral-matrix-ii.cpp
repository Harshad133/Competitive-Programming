class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        
        int num = 1;
        int rs = 0 , re = n-1 , cs = 0 , ce = n-1;

        while(rs<=re && cs <= ce){
            for(int i = cs ; i <= ce ; i++)
                matrix[rs][i] = num++;
            rs++;

            for(int i = rs ; i <= re ; i++)
                matrix[i][ce] = num++;
            ce--;

            for(int i = ce ; i >= cs && rs <= re ; i--)
                matrix[re][i] = num++;
            re--;

            for(int i = re ; i >= rs && cs <= ce ; i--)
                matrix[i][cs] = num++;
            cs++;
        }

        return matrix;
    }
};