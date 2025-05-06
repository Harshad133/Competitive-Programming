import math
class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0

        for i in nums:
            if (int(math.log10((i))) + 1) % 2 == 0:
                print(i)
                count += 1
        
        return count
        