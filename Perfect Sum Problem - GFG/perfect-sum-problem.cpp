//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	

	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        //no special conditions, simple answer
        vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
       
        dp[n][0] = 1;
        
        for(int i = n - 1 ; i >= 0 ; i--){
            for(int j = 0 ; j <=sum ; j++){
                
                int take = 0;
                
                if(j - arr[i] >= 0) take = dp[i+1][j - arr[i]];
                dp[i][j] = ( take + dp[i+1][j] ) % 1000000007;
            }
        }
        
        return dp[0][sum];
	}
	  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends