class Solution:
    def findMin(self, nums: List[int]) -> int:
        n = len(nums)
        low = 0
        high = n-1

        while low <= high:
            mid = (low + high) // 2

            if (mid > 0 and nums[mid] < nums[mid-1]) or (mid == 0 and nums[mid] <= nums[-1]):
                return nums[mid]
            elif nums[mid] > nums[high]:
                low = mid + 1
            else:
                high = mid - 1
        
        return 0