class Solution {
    public int[] searchRange(int[] nums, int target) {
        int find = Arrays.binarySearch(nums,target);
        
        if(find <0)
            return new int[] {-1,-1};
        
        int start = find-1 , end = find+1;
        //System.out.println(start);
        
        while(start >=0 && start < nums.length && nums[start] == nums[find])
            start--;
        
        start++;
        
        
        
        while(end >= 0 && end < nums.length && nums[end] == nums[find])
            end++;
        
        end--;
        
        return new int[] {start,end};
    }
}