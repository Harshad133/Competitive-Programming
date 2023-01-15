class Solution(object):
    def heightChecker(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        exp = list(heights)
        exp.sort()
        count = 0
        for i in range(len(heights)):
            if heights[i] != exp[i]:
                count+=1

        return count
