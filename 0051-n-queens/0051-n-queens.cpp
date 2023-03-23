class Solution {
public:

    void solve(int col,vector<string> board,vector<vector<string>> &res,vector<int> leftRow, vector<int> downDig, vector<int> upDig , int n){

        if(col == n){
            res.push_back(board);
            return;
        }

        for(int row = 0; row<n ; row++){
            if(leftRow[row] == 0 && downDig[row+col] == 0 && upDig[(n-1)+col-row] == 0){
                leftRow[row] = 1;
                downDig[row+col] = 1;
                upDig[(n-1)+col-row] = 1;
                board[row][col] = 'Q';
                solve(col+1,board,res,leftRow,downDig,upDig,n);
                board[row][col] = '.';
                leftRow[row] = 0;
                downDig[row+col] = 0;
                upDig[(n-1)+col-row] = 0;
            }
        }

    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string s(n,'.');
        vector<string> board(n,s);

        vector<int> leftRow(n,0) , downDig(2*n-1,0),upDig(2*n-1,0);
        solve(0,board,res,leftRow,downDig,upDig,n);

        return res;
    }
};