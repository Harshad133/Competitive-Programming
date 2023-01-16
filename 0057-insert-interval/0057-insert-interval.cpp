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

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
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