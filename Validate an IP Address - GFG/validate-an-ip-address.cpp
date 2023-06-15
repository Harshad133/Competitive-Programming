//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // your code here
        int counter = 0;
        // count number of '.'
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') counter++;
        }
        if (counter != 3) return 0;

        // stores the valid numbers
        unordered_set<string> st;
        for (int i = 0; i < 256; i++) st.insert(to_string(i));
        counter = 0;
        // temp contains the current segment
        string temp = "";
        for (int i = 0; i < s.length(); i++) {

            if (s[i] != '.') {
                temp = temp + s[i];
            } else {
                // if temp doesn't present in valid numbers set
                if (st.count(temp) != 0) counter++;

                temp = "";
            }
        }
        // temp=temp+s[s.length()-1];
        if (st.count(temp) != 0) counter++;

        if (counter == 4)
            return 1;
        else
            return 0;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends