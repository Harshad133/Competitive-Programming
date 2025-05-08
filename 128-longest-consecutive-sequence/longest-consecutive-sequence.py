class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        if len(nums) == 0:
            return 0

        nums.sort()

        count = 1
        m_count = -1
        print(nums)
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1]+1:
                count += 1
            elif nums[i] != nums[i-1]:
                if count > m_count:
                    m_count = count
                count = 1
        
        if count > m_count :
            m_count = count

        return m_count
