//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int X)
    {
        sort(nums,nums+n);

        for(int i = 0 ; i < n-2 ; i++){

            int low = i+1 , high = n-1 , s = X-nums[i],sum=0;

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

        return false;
    }

};


//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends