//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(int index,vector<int> nums,vector<int> sub,vector<vector<int>>& res){
            if(index >= nums.size()){
                res.push_back(sub);
                return;
            }
        
            sub.push_back(nums[index]);
            solve(index+1,nums,sub,res);
            sub.pop_back();
            solve(index+1,nums,sub,res);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int> > res;
        solve(0,A,{},res);
        sort(res.begin(),res.end());
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
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends