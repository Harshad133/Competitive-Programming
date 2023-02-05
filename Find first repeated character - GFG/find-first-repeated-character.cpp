//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    set<char> set;
    string res;
    
    for(int i = 0 ; i < s.size() ; i++){
        if(set.find(s[i]) != set.end()){
            res = res + s[i];
            return res;
        }
            
        else
            set.insert(s[i]);
    }
    
    return "-1";
}