class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        three = 0

        for i in arr:
            if three == 3:
                return True

            if i % 2 != 0:
                three += 1
            else:
                three = 0 
            
        if three == 3:
            return True

        return False      
        