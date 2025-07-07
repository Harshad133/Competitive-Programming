class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        curr = 0

        for next in range(len(nums)):
            if nums[next] != 0:
                nums[curr], nums[next] = nums[next], nums[curr]
                curr += 1
            