class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        range = high-low+1

        if range % 2 == 0:
            return range/2
        elif low % 2 == 0:
            return range/2
        
        return (range/2)+1