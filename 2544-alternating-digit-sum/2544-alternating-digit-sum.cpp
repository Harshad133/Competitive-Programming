class Solution {
public:
    int alternateDigitSum(int n) {
        string num = to_string(n);
        int sign = 1,sum = 0;

        for(int i = 0 ; i < num.size() ; i++){
            sum = sum + sign * (num[i]-48);
            sign = -sign;
        }

        return sum;
    }
};