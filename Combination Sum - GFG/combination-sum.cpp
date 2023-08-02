//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void combination(int i,vector<int> c,int target,vector<int> com,vector<vector<int>> &res){
        if(i >= c.size()){
            if(target == 0)
                res.push_back(com);
            return;
        }
                                                                                 
        if(c[i] <= target){
            com.push_back(c[i]);
            combination(i,c,target-c[i],com,res);
            com.pop_back();
        }

        combination(i+1,c,target,com,res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        set<int> set(candidates.begin(),candidates.end());
        vector<int> arr(set.begin(),set.end());
        combination(0,arr,target,{},res);

        return res;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends