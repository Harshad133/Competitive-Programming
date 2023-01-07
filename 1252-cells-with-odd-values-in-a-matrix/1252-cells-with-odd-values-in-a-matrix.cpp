class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        vector<vector<int>> mat(m,vector<int>(n,0));
        int count = 0;

        for(auto i: indices){
            for(int j = 0 ; j < n ; j++)
                mat[i[0]][j]++;

            for(int j = 0 ; j < m ; j++)
                mat[j][i[1]]++;
        }

        for(auto i : mat)
            for(auto j : i)
                if(j % 2 != 0)
                    count++;

        return count;
    }
};