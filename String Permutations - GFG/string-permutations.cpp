//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void permutaion(int index , string nums, vector<string> &res){
    if(index == nums.size()-1){
      res.push_back(nums);
      return;
    }
    
    for(int i = index ; i < nums.size() ; i++){
      swap(nums[index],nums[i]);
      permutaion(index+1,nums,res);
      swap(nums[i],nums[index]);
    }
      
  }
  
    
    vector<string> permutation(string S)
    {
        vector<string> res;
        // vector<bool> freq(nums.size(),false);
       // permution(nums,{},res,freq);
        permutaion(0,S,res);
        sort(res.begin(),res.end());
       return res;
    }
};



//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends