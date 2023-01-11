//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int high = *max_element(nums.begin(),nums.end());
        int low = 1;    

        while(low <= high){
            int mid = (low+high) >> 1;
            int sum = 0;
            for(auto i : nums)
                sum += ceil((double(i))/mid);

            if(sum <= threshold)
                high = mid-1;
            else
                low = mid+1;
        }

        return low;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends