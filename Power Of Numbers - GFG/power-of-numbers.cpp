//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    long long int m = 1e9+7;
    long long power(int x,int n)
    {
       if(n == 1)
            return x;

        if(n == 0)
            return 1;

        if(n < 0){
            x = 1/x;
            n = abs(n);
        }

        if(n % 2 == 0)
            return power(((x%m)*(x%m))%m,n/2);
        else
            return ((x%m) * (power(((x%m)*(x%m))%m,(n-1)/2))%m)%m;
    }

};



//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends