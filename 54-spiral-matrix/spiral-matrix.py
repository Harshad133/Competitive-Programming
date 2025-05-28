class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        ans = []
        
        sr, er = 0, len(matrix)-1
        sc, ec = 0, len(matrix[0])-1

        while(sr <= er and sc <= ec):
            for j in range(sc, ec+1):
                ans.append(matrix[sr][j])
            sr += 1
            
            for i in range(sr, er+1):
                ans.append(matrix[i][ec])
            ec -= 1

            if sr <= er:
                for j in range(ec, sc-1, -1):
                    ans.append(matrix[er][j])
                er -= 1

            if sc <= ec:
                for i in range(er, sr-1, -1):
                    ans.append(matrix[i][sc])
                sc += 1

        return ans
            
            
            