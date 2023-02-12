//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    
    static bool cmp(pair<int,int> a , pair<int,int> b){
        if(a.second == b.second)
            return a.first < b.first;
        
        return a.second > b.second;
    }
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int a[],int n)
    {
        map<int,int> m;

        for(int i =0 ; i < n ; i++)
            m[a[i]]++;

        vector<pair<int,int>> temp;

        for(auto i : m)
            temp.push_back(i);

        sort(temp.begin(),temp.end(),cmp);

        vector<int> ans;
        for(auto i : temp){
            for(int j = 1;j <=i.second;j++)
                ans.push_back(i.first);
        }
        
      
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends