//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string upper , lower;
        
        for(auto i : str){
            if(i >= 'a' && i <= 'z')
                lower += i;
            else
                upper += i;
        }
        
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        
        for(int i = 0,l=0,u=0 ; i < str.size() ; i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = lower[l++];
            else
                str[i] = upper[u++];
        }
        
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends