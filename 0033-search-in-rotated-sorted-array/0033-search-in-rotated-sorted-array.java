class Solution {
    public int search(int[] nums, int target) {
        int low = 0 , mid , high = nums.length-1;
        int n = nums.length;
        
        while(low < high){
            mid= (low+high)/2;
            
            if(nums[mid] > nums[high])
                low = mid+1;
            else 
                high = mid;
        }
        
        int ro = low;
        
        low = 0;
        high = nums.length-1;
        
       while (low <= high) {
            mid = (low + high) / 2;
           
            int realMid = (mid+ro)%n;
            
            if(nums[realMid] == target)
                return realMid;
            
            if (nums[realMid] > target)
                high = mid-1;
            else
                low = mid + 1;
        }
        
        return -1;
    }
}