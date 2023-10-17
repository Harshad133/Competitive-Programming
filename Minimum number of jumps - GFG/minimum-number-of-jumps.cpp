//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int nums[], int n){
        int nextI = 0 , max , i,count = 0 ,j;

        while(nums[nextI] != 0 && nextI != n-1){
            i = nextI;
            max = i+1;

            for(j = i+1 ; j <= i+nums[i] && j<= n-1 ; j++) {
                if(max+nums[max] < j+nums[j])
                    max = j;
            }

            if(j == n)
                max = n-1;

            nextI = max;
            count++;
        }
        
        if(nextI != n-1 && nums[nextI] == 0)
            return -1;

        return count;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends