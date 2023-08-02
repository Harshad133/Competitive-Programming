//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void addOperators(vector<string>& result, string nums, string t, long long last, long long curVal, int target) {
	if (nums.length() == 0) {
		if (curVal == target)
			result.push_back(t);
		return;
	}

	for (int i = 1; i<=nums.length(); i++) {
		string num = nums.substr(0, i);
		if(num.length() > 1 && num[0] == '0')
		    return;
		
		string nextNum = nums.substr(i);

		if (t.length() > 0) {
			addOperators(result, nextNum, t + "+" + num, stoll(num), curVal + stoll(num), target);
			addOperators(result, nextNum, t + "-" + num, -stoll(num), curVal - stoll(num), target);
			addOperators(result, nextNum, t + "*" + num, last * stoll(num), (curVal - last) + (last * stoll(num)), target);
		}
		else 
			addOperators(result, nextNum, num, stoll(num), stoll(num), target);
	}
}

vector<string> addOperators(string num, int target) {
	vector<string> result;
	addOperators(result, num, "", 0, 0, target);
	return result;
}
    // vector<string> addOperators(string S, int target) {
    //     // code here
    // }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends