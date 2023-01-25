class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r = grid.size(),c = grid[0].size();
        int low = 0 , high = r-1 , find = -1,mid;
        
        while(low <= high){
            mid = (low+high) >> 1;
            
            if(grid[mid][c-1] < 0 && mid > 0 && grid[mid-1][c-1] >= 0){ 
                break;
            }
            else if(grid[mid][c-1] < 0)
                high = mid-1;
            else
                low = mid+1;
        }
        // cout<<find;
        find = mid;
        
        if(find == -1)
            return 0;
        
        int count = 0;
        for(int i = find ; i < r ; i++)
            for(int j = 0 ; j < c ; j++)
                if(grid[i][j] < 0)
                    count++;
        
        return count;
            
    }
};