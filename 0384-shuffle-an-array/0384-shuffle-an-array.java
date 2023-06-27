class Solution {
    Integer[] original, curr;
    List<Integer> list;

    public Solution(int[] nums) {
        original = new Integer[nums.length];
        curr = new Integer[nums.length];
        for (int i = 0; i < nums.length; i++) {
            original[i] = nums[i];
            curr[i] = nums[i];
        }
        list = Arrays.asList(curr);
    }
    
    public Integer[] reset() {
        return original;
    }
    
    public Integer[] shuffle() {
        Collections.shuffle(list);
        list.toArray(curr);
        return curr;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int[] param_1 = obj.reset();
 * int[] param_2 = obj.shuffle();
 */