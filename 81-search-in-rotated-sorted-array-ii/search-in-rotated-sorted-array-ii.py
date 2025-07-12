class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        n = len(nums)
        low = 0
        high = n - 1

        # find pviot element
        pivot = 0
        for i in range(1,n):
            if nums[i] < nums[i-1]:
                pivot = i
                break

        while low <= high:
            mid = (low + high) // 2

            if nums[(mid + pivot) % n] == target:
                return True
            elif nums[(mid + pivot) % n] > target:
                high = mid - 1
            else:
                low = mid + 1
        
        return False