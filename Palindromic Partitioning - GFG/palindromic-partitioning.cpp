//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    bool isPalind(int i,int j,string &str){
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    int solveTab(string &str){
        //create and initialize dp array
        int n=str.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        //analyse base case
        for(int i=0;i<=n;i++){
            if(isPalind(i,n,str)){
                dp[i][n]=0;
            }
            else{
                dp[i][n]=1e8;
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=i;j--){
                int ans=0;
                if(isPalind(i,j,str)){
                    //cut the first part
                    int case1=1+dp[j+1][j+1];
                    
                    //leave it
                    int case2=dp[i][j+1];
                    
                    ans=min(case1,case2);
                }
                else{
                    ans=dp[i][j+1];
                }
                
                dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }
    
public:
    int palindromicPartition(string str)
    {
        return solveTab(str)-1;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends