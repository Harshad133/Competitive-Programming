//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void path(int row,int col,int n,string root,vector<vector<int>> &m,vector<string>& res,vector<vector<int>>& vis,vector<int>& di,vector<int>& dj){
        if(row == n-1 && col == n-1){
            res.push_back(root);
            return;
        }
        
        // int n = m.size();
        string dir = "DLRU";
        
        for(int i = 0 ; i < 4 ; i++){
            int nextR = row+di[i];
            int nextC = col+dj[i];
            
            if(nextR >= 0 && nextC >= 0 && nextR <n && nextC < n && !vis[nextR][nextC] && m[nextR][nextC] == 1){
                vis[row][col] = 1;
                path(nextR,nextC,n,root+dir[i],m,res,vis,di,dj);
                vis[row][col] = 0;
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> res;
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<int> di = {1,0,0,-1};
        vector<int> dj = {0,-1,1,0};
        
        if(m[0][0] == 1)
            path(0,0,n,"",m,res,vis,di,dj);
        return res;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends