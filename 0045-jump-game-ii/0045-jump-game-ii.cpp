class Solution {
public:
    int jump(vector<int>& nums) {
        int nextI = 0 , max , i,count = 0 ,j, n = nums.size();

        while(nextI != n-1){
            i = nextI;
            max = i+1;

            for(j = i+1 ; j <= i+nums[i] && j<= n-1 ; j++) {
                if(max+nums[max] < j+nums[j])
                    max = j;
            }

            if(j == n)
                max = n-1;

            nextI = max;
            count++;
        }

        return count;
    }
};