class Solution {
public:
    int splitNum(int num) {
        vector<int> nums;

        while(num != 0){
            nums.push_back(num%10);
            num = num / 10;
        }

        sort(nums.begin(),nums.end());

        int r1 = 0 , r2 = 0;

        for(int i = 0 ; i < nums.size() ; i+=2){
            r1 = r1 * 10 + nums[i];
        }

        for(int i = 1 ; i < nums.size() ; i+=2){
            r2 = r2 * 10 + nums[i];
        }

        return r1+r2;
    }
};