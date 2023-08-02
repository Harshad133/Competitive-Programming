//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    int m = 1e9+7;
    long long int nthFibonacci(long long int n){
        vector<long long int> ans(n);
        
        ans[0] = ans[1] = 1;
        
        if(n == 1 || n ==2)
            return 1;
        
        for(int i = 2 ; i < n ; i++){
            ans[i] = (ans[i-1] + ans[i-2]) % m;
        }
        
        return ans[n-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends