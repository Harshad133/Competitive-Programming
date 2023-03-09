//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void subsets(int i,int sum,vector<int> nums,vector<int> &res){
        if(i >= nums.size()){
            res.push_back(sum);
            return;
        }
        
        sum += nums[i];
        subsets(i+1,sum,nums,res);
        sum -= nums[i];
        subsets(i+1,sum,nums,res);
    }
    
    vector<int> subsetSums(vector<int> nums, int N)
    {
        vector<int> res;

        // First Method Using bit manupulation
        // for(int n = 0 ; n < (1 << nums.size()) ; n++){
        //     int sum = 0;
        //     for(int i = 0 ; i < nums.size() ; i++){
        //         if((n & (1 << i)) != 0)
        //             sum += nums[i];
        //     }

        //     res.push_back(sum);
        // }

        // return res;
        
        
        subsets(0,0,nums,res);
        
        return res;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends