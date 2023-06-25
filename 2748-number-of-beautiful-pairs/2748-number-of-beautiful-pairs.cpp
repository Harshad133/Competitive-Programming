class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) 
        {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ;i < nums.size() ; i++){
            int fd;
            while(nums[i] != 0){
                fd = nums[i]%10;
                nums[i] /= 10;
            }
            for(int j = i+1 ; j < nums.size() ; j++){
                if(gcd(fd,nums[j]%10) == 1)
                    count++;
            }
        }

        return count;
    }
};