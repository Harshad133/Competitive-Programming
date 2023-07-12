//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void print(vector<int> nums){
        for(auto i : nums)
            cout<<i;
        cout<<" ";
    }
    void genrate(int index,vector<int> nums){
        if(index == nums.size()){
            print(nums);
            return;
        }
        
        nums[index] = 0;
        genrate(index+1,nums);
        
        if(index == 0 || (index > 0 && nums[index-1] != 1)){
            nums[index] = 1;
            genrate(index+1,nums);
        }
    }

    void generateBinaryStrings(int num){
        vector<int> nums(num);
        // sort(nums.begin(),nums.end());
        genrate(0,nums);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends