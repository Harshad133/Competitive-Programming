class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        res = 1
        ans = [res]

        for i in range(1,rowIndex+1):
            res = res * (rowIndex+1-i)
            res = res // i
            ans.append(res)
        
        return ans