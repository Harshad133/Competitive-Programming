class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        r = len(matrix)
        c = len(matrix[0])
        row = set()
        col = set()

        for i in range(r):
            for j in range(c):
                if matrix[i][j] == 0:
                    row.add(i)
                    col.add(j)
        
        for i in row:
            for x in range(c):
                matrix[i][x] = 0

        for j in col:
            for x in range(r):
                matrix[x][j] = 0
