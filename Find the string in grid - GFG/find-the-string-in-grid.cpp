//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>grid,string word,vector<vector<int>> di){
        int n=grid.size();
    int m=grid[0].size();
    
    for(auto dir:di){
        int newi=i;
        int newj=j;
        int c=0;
        
        while(newi>=0 && newj>=0 && newi<n && newj<m && c<word.length() && grid[newi][newj]==word[c]){
            newi=newi+dir[0];
            newj=newj+dir[1];
            c++;
        }
        if(c==word.length()){
            return true;
        }
    }
    return false;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>> res;
	    
	    vector<vector<int>> di={{-1,0},{0,-1},{-1,-1},{-1,1},{1,-1},{1,0},{1,1},{0,1}};
        
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == word[0] && solve(i,j,grid,word,di))
                    res.push_back({i,j});
            }
        }
        
        if(res.size() == 0)
            return {{-1}};
        
        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends