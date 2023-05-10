class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // if(nums.size() == 1)
        //     return nums[0];
        
        int k = 1;
        while(k < nums.size()){
            for(int i = 0 ; i < nums.size()-k ; i++){
                nums[i] = (nums[i]+nums[i+1]) % 10;
                // cout<<nums[i] <<endl;
            }   
            k++;
        }

        return nums[0];
    }
};