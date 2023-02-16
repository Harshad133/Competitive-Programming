class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first = 0 , second = 1 , i = 2;
        int count = 0;

        for(i = 2 ; i < nums.size() ; i++,first++,second++){
            if(nums[i] == nums[first] && nums[i] == nums[second]){
                nums.erase(nums.begin()+i);
                // count++;
                i--;
                first--;
                second--;
            }
        }

        return nums.size();
    }
};