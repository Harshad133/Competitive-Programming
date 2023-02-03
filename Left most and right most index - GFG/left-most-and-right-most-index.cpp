//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int low = 0 , high = v.size()-1,mid;
        int fin = 0,lin = v.size()-1;
        // first ocurrence
        
        while(low <= high){
            mid = (low+high) >> 1;
            
            if(v[mid] == x && v[mid-1] != x){
                fin = mid;
                break;
            }
            
            else if(v[mid] > x || (v[mid] ==  x && v[mid-1] ==x ))
                high = mid-1;
            else 
                low = mid+1;
        }
        
        if(v[mid] != x)
            return {-1,-1};
            
        for(int i = fin+1 ; i < v.size() ; i++)
            if(v[i] != x){
                lin = i-1;
                break;
            }
        
        return {fin,lin};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends