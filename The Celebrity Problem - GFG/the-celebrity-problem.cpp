//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int> >& m,int a, int b)
{
    return m[a][b];
}
    
    int celebrity(vector<vector<int> >& m, int n) 
    {
        stack<int> s;

    // Celebrity
    int C; 

    // Push everybody to stack
    for (int i = 0; i < n; i++)
        s.push(i);

    // Extract top 2
 

    // Find a potential celebrity
    while (s.size() > 1)
    {   
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        if (knows(m,A, B))
        {
          s.push(B);
        }
        else
        {
          s.push(A);
        }
    }
     
  
    // Potential candidate?
    C = s.top();
    s.pop();

    // Check if C is actually
    // a celebrity or not
    for (int i = 0; i < n; i++)
    {
        // If any person doesn't 
        // know 'C' or 'C' doesn't 
        // know any person, return -1
        if ( (i != C) &&
                (knows(m,C, i) || 
                 !knows(m,i, C)) )
            return -1;
    }

    return C;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends