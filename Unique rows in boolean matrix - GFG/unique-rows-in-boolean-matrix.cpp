//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>> res;
        
        for(int i = 0 ; i < row ; i++){
            int j = 0,x=0;
            if(i > 0){
                for(j = 0 ; j < res.size() ; j++){
                    for(x = 0 ; x < col ; x++)
                        if(res[j][x] != M[i][x])
                            break;
                    if(x == col)
                        break;
                }
            }
            
            if(j == res.size()){
                res.push_back(vector<int>(col));
                for(int t = 0 ; t < col ; t++)
                    res.back()[t] = M[i][t];
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends