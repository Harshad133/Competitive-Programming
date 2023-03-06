//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int num) {
        string s = to_string(num);
        
        int diff = 0;
        
        for(auto i: s){
            if(i == '0')
                diff = diff*10 + 5;
            else
                diff = diff*10 + 0;
        }
        
        return num+diff;
}