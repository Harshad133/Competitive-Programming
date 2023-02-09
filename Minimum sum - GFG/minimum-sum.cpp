//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        sort(arr,arr+n);
        
        string res;
        int carry = 0;
        int sum = 0;
        
        for(int i = n-1 ;i>=0 ; i-=2){
            int d2 = i-1 >= 0 ? arr[i-1] : 0;
            
            sum = arr[i]+d2+carry;
            
            if(sum != 0)
                res = (char)(sum % 10 + 48) + res;
            // cout<<sum<<" "<<i<<" "<<res.size()<<endl;
            carry = sum / 10;
            sum = 0;
        }
        // cout<<res.size();
        if(carry !=0)
            res = (char)(carry+48) + res;
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends