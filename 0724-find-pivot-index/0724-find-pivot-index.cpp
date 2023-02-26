class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int res = 0;

        int lsum = 0 , rsum = 0;

        rsum = accumulate(nums.begin(),nums.end(),0);

        // for(auto i : nums)
        //     rsum += i;

        for(int i = 0 ; i < nums.size() ; i++){
            rsum -= nums[i];

            if(lsum == rsum)
                return i;

            lsum += nums[i];
        }

        return -1;
    }
};