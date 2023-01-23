//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        string res;
        stack<char> stack;
        
        for(int i = 0 ; i < s.size() ; i++){
            if(stack.empty() || stack.top() != s[i])
                stack.push(s[i]);
            else
                stack.pop();
        }
        
        if(stack.empty())
            return "-1";
        
        while(!stack.empty()){
            res += stack.top();
            stack.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends