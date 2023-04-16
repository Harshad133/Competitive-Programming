class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max = 0 , num = INT_MAX;
        
        for(int i = 0 ; i < divisors.size();i++){
            int count = 0;
            for(int j = 0 ; j < nums.size();j++){
                if(nums[j] % divisors[i] == 0)
                    count++;
            }
            
            if(count > max || (count == max && divisors[i] < num)){
                max = count;
                num = divisors[i];
            }  
        }
        
        return num;
    }
};