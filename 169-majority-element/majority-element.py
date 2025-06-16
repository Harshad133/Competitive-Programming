class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        el = nums[0]
        count = 1

        for i in range(1,len(nums)):
            if count == 0:
                el = nums[i]

            if nums[i] == el:
                count += 1
            else:
                count -= 1

        # Because mejority element exist in array
        # if this condition is not manodatory than we have to check element is mejority or not
        return el

        