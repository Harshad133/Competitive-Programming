//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int weights[], int n, int days) {
         int  high = 0 , low = 1;
        for(int i = 0 ; i < n ; i++){
            high += weights[i];
            if(weights[i] > low)
                low = weights[i];
        }

        // int low = *max_element(weights.begin(),weights.end());

        while(high >= low){
            int mid = (low+high) >> 1;

            int d = 1,sum = 0;
            for(int i = 0 ; i < n ; i++){
                sum += weights[i];
                if(sum > mid){
                    sum -= weights[i];
                    d++;
                    sum = weights[i];
                }
            }

            if(d <= days)
                high = mid-1;
            else
                low = mid+1;
        }

        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends