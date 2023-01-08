//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        map<string,int> m;
        vector<string> ans;
        
        for(int i = 0 ; i < n ; i++){
            m[arr[i]]++;
        }
        
        int votes = INT_MIN;
        string name;
        for(auto i : m){
            if(i.second > votes){
                votes = i.second;
                name = i.first;
            }
            else if(i.second == votes){
                name = min(i.first,name);
            }
        }
        
        ans.push_back(name);
        ans.push_back(to_string(votes));
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends