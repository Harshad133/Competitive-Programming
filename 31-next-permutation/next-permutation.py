class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        br = -1

        for i in range(len(nums)-1, -1, -1):
            if nums[i] > nums[i-1]:
                br = i-1
                print(br)
                break
        print(br)
        if br != -1:
            for i in range(len(nums)-1, br, -1):
                if nums[i] > nums[br]:
                    nums[br],nums[i] = nums[i],nums[br]
                    break
        print(nums)
        nums[br+1: len(nums)] = (nums[br+1: len(nums)])[::-1]