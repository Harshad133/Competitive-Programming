class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        len_row = len(matrix)
        len_col = len(matrix[0])
        fcol = 1

        for i in range(len_row):
            for j in range(len_col):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    if j == 0:
                        fcol = 0
                    else:
                        matrix[0][j] = 0

        print(matrix)
        # make zero marked row
        for i in range(1,len_row):
            if matrix[i][0] == 0:
                for j in range(len_col):
                    matrix[i][j] = 0
        
        # make marked col zero
        for j in range(1, len_col):
            if matrix[0][j] == 0:
                for i in range(len_row):
                    matrix[i][j] = 0
        
        if matrix[0][0] == 0:
            for j in range(len_col):
                matrix[0][j] = 0

        if fcol == 0:
            for i in range(len_row):
                matrix[i][0] = 0