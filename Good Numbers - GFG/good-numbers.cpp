//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isGoodNumber(int n,int D){
        int sum = n % 10;
        
        if(sum == D)
            return false;
            
        n =n/10;
        
        while(n != 0){
            int temp = n % 10;
            
            if(temp == D || temp <= sum)
                return false;
                
            sum += temp;
            n = n / 10;
        }
        
        return true;
    }
    
    vector<int> goodNumbers(int L, int R, int D) {
        vector<int> res;
        
        for(int i = L ; i <= R ; i++){
            if(isGoodNumber(i,D))
                res.push_back(i);
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends