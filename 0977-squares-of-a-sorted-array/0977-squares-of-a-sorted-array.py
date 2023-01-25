class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        for i in range(len(nums)):
            nums[i] *= nums[i];
            
        nums.sort()
        
        return nums;
        