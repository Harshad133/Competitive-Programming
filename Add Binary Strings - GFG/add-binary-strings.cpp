//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{
	    int sum = 0 , carry = 0;
        int i = a.size()-1 , j = b.size()-1;
        string res;

        while(i >= 0 || j >=0) {
            sum = 0;
            int d1 = i >= 0 ? a[i]-48 : 0;
            int d2 = j >= 0 ? b[j]-48 : 0;

            sum = d1+d2+carry;
            // cout<<d1<<" "<<d2<<endl
            
            res += (char)((sum & 1)+48);
            carry = (sum >> 1);
            
            i--;
            j--;
        }

        if(carry != 0)
            res += (char)(carry+48);
            
        
        int l = 0; 
        for(l = res.size()-1 ; l >= 0 ; l--){
            if(res[l] == '0')    
                res.pop_back();
            else
                break;
        }
        
        reverse(res.begin(),res.end());
        return res;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends