//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> res;

         if(matrix.size() == 0) 
            return res;
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
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends