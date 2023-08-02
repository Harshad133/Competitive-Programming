//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int n) {
        if(n == 1)
                return true;
        
        int sum = 0;
            while(n != 0){
                sum = sum + (n%10)*(n%10);
                n = n /10;
            }
            
            n = sum;
            sum = 0;
            if(n == 4)
                return false;
            
        return isHappy(n);
    }
    
    int nextHappy(int N){
        // code here
        int n;
        for(n = N+1 ; 1; n++){
            if(isHappy(n))
                break;
        }
        return n;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends