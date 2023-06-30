//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    
	    int counte = 0 , counto = 0;
	    for(int i = 0 ; i < s.size() ; i++){
	        if(i % 2 == 0 && s[i] == '1')
	            counte++;
	        
	        if(i % 2 != 0 && s[i] == '1')
	            counto++;
	    }
	        
	    if((abs(counte-counto)) % 3 == 0)    
	        return 1;
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends