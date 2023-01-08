//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int nums[], int n, int target)  
{
    // vector<vector<int>> ans;
        sort(nums, nums+n);
        // int n = nums.size();

        for (int i = 0; i < n - 3; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i- 1])){

            for (int j = i + 1; j < n - 2; j++)
            {

                if (j == i+1 || (j > i+1 && nums[j] != nums[j - 1]))
                {
                    long long int low = j + 1, high = n - 1;
                    long s = (long)target - (long)(nums[j] + nums[i]);
                    long sum = 0;

                    while (low < high)
                    {
                        sum = nums[low] + nums[high];

                        if (sum == s)
                        {
                            return true;
                        }
                        else if (sum > s)
                            high--;
                        else if (sum < s)
                            low++;
                    }
                }
            }
            }
        }

        return false;
}