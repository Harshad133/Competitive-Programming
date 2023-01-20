//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> merge;

    for (int i = 0; i < intervals.size(); i++)
    {
        if(merge.empty() || merge.back()[1] < intervals[i][0])
        {
            merge.push_back(intervals[i]);
        }
        else
            merge.back()[1] = max(merge.back()[1] , intervals[i][1]);
    }

    return merge;
    }
  
    vector<vector<int>> insertNewEvent(int N, vector<vector<int>> &intervals, vector<int> &newInterval) {
        int i = 0;
        // for(i = 0 ; i < intervals.size() ; i++){
        //     if(newInterval[0] <= intervals[i][0]){
        //         intervals.insert(intervals.begin()+i,newInterval);
        //         break;
        //     }
        // }

        int low = 0 , high = intervals.size()-1,mid;

        while(low < high){
            mid = (low+high) >> 1;

            if(newInterval[0] < intervals[mid][0])
                high = mid;
            else 
                low = mid+1;
        }

        if(intervals.size() > 0 && newInterval[0] <= intervals[low][0])
            intervals.insert(intervals.begin()+low,newInterval);
        else
            intervals.insert(intervals.end(),newInterval);

        return merge(intervals);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> intervals(N,vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0]>>intervals[i][1];
        }
        vector<int> newEvent(2);
        cin>>newEvent[0]>>newEvent[1];
        
        Solution obj;
        vector<vector<int>> ans = obj.insertNewEvent(N, intervals,newEvent);
        cout<<"[";
        for(int i=0;i<ans.size();i++){
            cout<<"["<<ans[i][0]<<','<<ans[i][1]<<']';
            if(i!=(ans.size()-1)) cout<<",";
        }
        cout<<"]"<<endl;
    }
    return 0;
}
// } Driver Code Ends