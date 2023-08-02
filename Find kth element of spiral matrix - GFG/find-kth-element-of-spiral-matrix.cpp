//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		vector<int> res;

        int rs = 0, re = n - 1, cs = 0, ce = m - 1;
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
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends