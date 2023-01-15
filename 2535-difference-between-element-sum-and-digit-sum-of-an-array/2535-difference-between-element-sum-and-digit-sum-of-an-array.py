class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        sum = 0
        for i in nums:
            sum += i
    
        dsum = 0;
        
        for i in nums:
            temp = i
            while temp != 0:
                dsum += (temp % 10)
                temp = temp / 10
        
        return abs(sum-dsum)