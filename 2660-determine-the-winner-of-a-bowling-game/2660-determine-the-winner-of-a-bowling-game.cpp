class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        long long int sum1 = 0 , sum2 = 0 , n =player1.size();
        
        for(int i = 0 ; i < n ; i++){
            if((i >= 1 && player1[i-1] == 10) ||(i >= 2 && player1[i-2] == 10))
                sum1 += player1[i] * 2;
            else
                sum1 += player1[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            if((i >= 1 && player2[i-1] == 10) ||(i >= 2 && player2[i-2] == 10))
                sum2 += player2[i] * 2;
            else
                sum2 += player2[i];
        }
        
        if(sum1 == sum2)
            return 0;
        
        return sum1 > sum2 ? 1 : 2;
    }
};