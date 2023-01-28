class Solution(object):
    def maxProductDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        n = len(nums)
        return (nums[n-1]*nums[n-2]) - (nums[0]*nums[1])