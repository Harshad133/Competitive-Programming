//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        vector<int> res;

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
        
        return res[k-1];
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
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends