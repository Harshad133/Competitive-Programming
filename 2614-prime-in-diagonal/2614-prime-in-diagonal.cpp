class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; ++i) {
            if (isPrime(nums[i][i]))
                res = max(res, nums[i][i]);
            if (isPrime(nums[n-i-1][i]))
                res = max(res, nums[n-i-1][i]);
        }
        return res;
    }

    bool isPrime(int n ){
        if(n == 1 || n==0)
            return false;

        for(int i =2 ; i * i <= n ; i++)
            if(n % i == 0)
                return false;

        return true;
    }

};