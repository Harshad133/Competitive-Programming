//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int m = 1e9+7;
    long long int power(long long int x, long long int n) { 
        if(n == 1)
            return x;

        // if(n == 0)
        //     return 1;

        // if(n < 0){
        //     x = 1.00/x;
        //     n = abs(n);
        // }

        if(n % 2 == 0)
            return power(((x%m)*(x%m))%m,n/2);
        else
            return (x%m * power(((x%m)*(x%m))%m,(n-1)/2)%m)%m;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends