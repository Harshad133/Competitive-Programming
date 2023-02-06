//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> res;

        for(int n = 1 ; n < (1 << s.size()) ; n++){
            string temp = "";

            for(int i = 0 ; i < s.size() ; i++){
                if((n & (1 << i)) != 0)
                    temp = temp + s[i];
            }

            res.push_back(temp);
            // cout<<temp <<endl;
            // for(auto i : res)
            //     cout<<i <<endl;
            temp = "";
        }
        
        sort(res.begin(),res.end());
        return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends