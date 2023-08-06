class Solution {
public:
    void solve(int col,vector<string> board,int& count,vector<int> leftRow, vector<int> downDig, vector<int> upDig , int n){

        if(col == n){
            count++;
            return;
        }

        for(int row = 0; row<n ; row++){
            if(leftRow[row] == 0 && downDig[row+col] == 0 && upDig[(n-1)+col-row] == 0){
                leftRow[row] = 1;
                downDig[row+col] = 1;
                upDig[(n-1)+col-row] = 1;
                board[row][col] = 'Q';
                solve(col+1,board,count,leftRow,downDig,upDig,n);
                board[row][col] = '.';
                leftRow[row] = 0;
                downDig[row+col] = 0;
                upDig[(n-1)+col-row] = 0;
            }
        }

    }
    int totalNQueens(int n) {
        int count = 0;
        string s(n,'.');
        vector<string> board(n,s);

        vector<int> leftRow(n,0) , downDig(2*n-1,0),upDig(2*n-1,0);
        solve(0,board,count,leftRow,downDig,upDig,n);

        return count;
    }
};