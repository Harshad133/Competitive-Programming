//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    vector<int> ocur(26,0);
	    string res;
	    
	    for(auto i : s)
	        ocur[i-97]++;
	        
	   //cout<<ocur[19]<<endl;
	   for(int i = 0 ; i < s.size() ; i++){
	       if(ocur[s[i]-97] != 0){
	           res += s[i];
	           ocur[s[i]-97] = 0;
	       }
	   }
	   
	   return res;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends