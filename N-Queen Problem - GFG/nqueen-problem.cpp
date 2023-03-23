//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    void solve(int col,vector<int> board,vector<vector<int>> &res,vector<int> leftRow, vector<int> downDig, vector<int> upDig , int n){

        if(col == n){
            res.push_back(board);
            return;
        }

        for(int row = 0; row<n ; row++){
            if(leftRow[row] == 0 && downDig[row+col] == 0 && upDig[(n-1)+col-row] == 0){
                leftRow[row] = 1;
                downDig[row+col] = 1;
                upDig[(n-1)+col-row] = 1;
                // board[row][col] = 'Q';
                board.push_back(row+1);
                solve(col+1,board,res,leftRow,downDig,upDig,n);
                // board[row][col] = '.';
                board.pop_back();
                leftRow[row] = 0;
                downDig[row+col] = 0;
                upDig[(n-1)+col-row] = 0;
            }
        }

    }
        
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> res;
        
        vector<int> leftRow(n,0) , downDig(2*n-1,0),upDig(2*n-1,0);
        
        solve(0,{},res,leftRow,downDig,upDig,n);
        
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends