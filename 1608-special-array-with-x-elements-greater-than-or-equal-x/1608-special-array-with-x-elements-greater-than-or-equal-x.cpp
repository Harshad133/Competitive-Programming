class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int start = 0 , end = *max_element(nums.begin(),nums.end()),num;

        while(start <= end){
            num = (start+end) >> 1;

            int low = 0 , high = nums.size()-1,mid;
            while(low <= high){
                mid = (low+high) >> 1;

                // if(nums[mid] == num)
                //     break;

                if(nums[mid] >= num && mid > 0 && nums[mid-1] < num)
                    break;
                else if(nums[mid] >= num)
                    high = mid-1;
                else
                    low = mid+1;
            }

            if(nums[mid] >= num && num == n-mid)
                return num;
            else if(num < n-mid)
                start = num+1;
            else
                end = num-1;
            
        }

        return -1;
    }
};