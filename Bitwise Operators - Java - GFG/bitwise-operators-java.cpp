//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);


// } Driver Code Ends
// User function Template for C++

// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOp(int a, int b, int c) {
    int e = (c ^ b);

    cout<<(a ^ a)<<endl<<e<<endl<<(a & b)<<endl<< (c | (a ^ a))<<endl<<(~e)<<endl;
}

//{ Driver Code Starts.

// Driver code to test above function
int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOp(a, b, c);
    }

    return 0;
}
// } Driver Code Ends