//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	int find_xor(int n)
	{
	    int zero = 0 , one = 0;
	    
	    while(n != 0){
	        int t = n & 1;
	        if(t == 1)
	            one++;
	        else
	            zero++;
	            
	        n = n >> 1;
	     }
	   return zero xor one; 
	}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.find_xor(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends