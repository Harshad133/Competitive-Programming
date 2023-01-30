class Solution {
public:
    int tribonacci(int n) {
//         vector<int> num(38);
        
//         num[0] = 0;
//         num[1] = num[2] = 1;
        
//         for(int i = 3 ; i <= n ; i++){
//             num[i] = num[i-1]+num[i-2]+num[i-3];
//         }
        
//         return num[n];
        
        int dp[] = {0, 1, 1};
        for (int i = 3; i <= n; ++i)
            dp[i % 3] = dp[0] + dp[1] + dp[2];
        return dp[n % 3];
    }
};