class Solution {
public:
    void reflect(vector<vector<int>> &matrix) 
{
    int temp;
    int n = matrix.size();
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
           temp = matrix[i][j];
           matrix[i][j] = matrix[i][n-1-j];
           matrix[i][n-1-j] = temp;
        }  
    }
}

void transpose(vector<vector<int>> &matrix) 
{
    int temp;
    int n=matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
        
    } 
}

void rotate(vector<vector<int>> &matrix) 
{
    transpose(matrix);
    reflect(matrix);
}
};