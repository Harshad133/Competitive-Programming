//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int nums[], int n)
    { 
        sort(nums,nums+n);

        for(int i = 0 ; i < n-2 ; i++){

            int low = i+1 , high = n-1 , s = -nums[i],sum=0;

            while(low < high){
                sum = nums[low]+nums[high];

                if(sum == s)
                    return true;
                else if(sum > s)
                    high--;
                else if(sum < s)
                    low++;
            }
        
        }

        return false;//Your code here
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends