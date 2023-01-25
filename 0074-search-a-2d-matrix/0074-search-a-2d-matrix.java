class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i = 0 , j = matrix.length-1 , mid = 0;
        
        while(i <= j){
            mid = (i+j)/2;
            
            if(matrix[mid][0] <= target)
                if(matrix[mid][matrix[mid].length-1] >= target)
                    break;
                else
                    i = mid+1;
            else
                j = mid-1;
        }
        
        if(i<=j && Arrays.binarySearch(matrix[mid],target) >= 0)
                return true;
        
        return false;
    }
}