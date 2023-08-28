class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j = 1;
        
        for(j = 1 ; j < nums.size() ; j++)
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
                
        return i+1;
        
    }
};