class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(),nums.end());
        int low = 1;    

        while(low <= high){
            int mid = (low+high) >> 1;
            int sum = 0;
            for(auto i : nums)
                sum += ceil((double(i))/mid);

            if(sum <= threshold)
                high = mid-1;
            else
                low = mid+1;
        }

        return low;
    }
};