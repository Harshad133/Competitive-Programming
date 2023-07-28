//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(int indax,string s,string p,vector<string>& res){
        if(indax >= s.size()){
            res.push_back(p);
            return;
        }
        
        for(int i = indax ; i < s.size() ; i++){
            p += s[i];
            solve(i+1,s,p,res);
            p += " ";
        }
    }
    vector<string> permutation(string S){
        vector<string> res;
        solve(0,S,"",res);
        sort(res.begin(),res.end());
        
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends