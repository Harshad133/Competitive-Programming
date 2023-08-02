//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void genComb(int i , int n , int k , vector<int> com , vector<vector<int>> &res){
            if(com.size() == k){
                if(n == 0)
                    res.push_back(com);
                return;
            }

        for(int j = i ; j < 10 ; j++){
            com.push_back(j);
            genComb(j+1,n-j,k,com,res);
            com.pop_back();
        }
       
    }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<vector<int>> res;
        genComb(1,N,K,{},res);
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends