class Solution {
public:
    // int binarySearch(vector<vector<int>>& nums , int val){
    //     int low = 0 , high = nums.size()-1 , mid = -1;

    //     while(low <= high){
    //         mid = (low+high) >> 1;

    //         if(nums[mid][0] == val)
    //             return mid;
    //         else if(nums[mid][0] > val)
    //             high = mid-1;
    //         else 
    //             low = mid+1;
    //     }

    //     return -1;
    // }

    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        // vector<vector<int>> res(nums1.begin(),nums1.end());

        // for(int i = 0 ; i < nums2.size() ; i++){
        //     int temp = binarySearch(nums1,nums2[i][0]);
        //     if(temp == -1)
        //         res.push_back(nums2[i]);
        //     else
        //         res[temp][1] += nums2[i][1];
        // }

        // sort(res.begin(),res.end());

        // return res;

        vector<vector<int>> ans; 
        for (int i = 0, j = 0; i < nums1.size() || j < nums2.size(); ) 
            if (j == nums2.size() || i < nums1.size() && nums1[i][0] <= nums2[j][0]) 
                ans.push_back(nums1[i++]); 
            else {
                if (ans.size() && ans.back()[0] == nums2[j][0]) ans.back()[1] += nums2[j][1]; 
                else ans.push_back(nums2[j]);
                ++j; 
            }
        return ans; 
    }
};