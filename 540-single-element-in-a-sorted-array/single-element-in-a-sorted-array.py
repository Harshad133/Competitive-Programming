
class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        n = len(nums)

        #  My method
        # while low <= high:
        #     mid = (low + high) // 2

        #     if mid > 0 and nums[mid] == nums[mid-1]:
        #         if (mid-1-low) > 0 and (mid-1-low) % 2 != 0:
        #             high = mid - 2
        #         else:
        #             low = mid + 1

        #     elif mid < n-1 and nums[mid] == nums[mid+1]:
        #         if (high - mid - 1) > 0 and (high - mid - 1)  % 2 != 0:
        #             low = mid + 2
        #         else:
        #             high = mid - 1
        #     else:
        #         return nums[mid]
        
        # return 0

        if n == 1:
            return nums[0]
        if nums[0] != nums[1]:
            return nums[0]
        if nums[n-1] != nums[n-2]:
            return nums[n-1]

        low = 1
        high = n-2

        while low <= high:
            mid = low + (high - low) // 2

            if nums[mid] != nums[mid-1] and nums[mid] != nums[mid+1]:
                return nums[mid]
            
            if (mid % 2 != 0 and nums[mid] == nums[mid-1]) or (mid % 2 == 0 and nums[mid] == nums[mid+1]):
                low = mid + 1
            else:
                high = mid - 1
        
        return 0

        