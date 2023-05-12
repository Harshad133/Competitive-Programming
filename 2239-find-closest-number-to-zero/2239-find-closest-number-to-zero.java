class Solution {
    public int findClosestNumber(int[] nums) {
        int res = Integer.MAX_VALUE;

        for(int i = 0 ; i < nums.length ;i++){
            if(Math.abs(res) > Math.abs(nums[i]))
                res = nums[i];
            else if(Math.abs(res) == Math.abs(nums[i]))
                if(res < nums[i])
                    res = nums[i];
        }

        return res;
    }
}