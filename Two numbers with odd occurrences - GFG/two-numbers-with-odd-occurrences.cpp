//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int nums[], long long int N)  
    {
        long long int nxor = 0;
        
        for(int i = 0 ; i < N ; i++){
            nxor ^= nums[i];
        }
        
        long long int rmb = nxor & ~(nxor-1);
        
        long long int x = 0 , y = 0;
        
        
        for(int i = 0 ; i < N ; i++){
            if((nums[i] & rmb) == 0)
                x ^= nums[i];
            else
                y ^= nums[i];
        }
        
        vector<long long int> ans{max(x,y),min(x,y)};
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends