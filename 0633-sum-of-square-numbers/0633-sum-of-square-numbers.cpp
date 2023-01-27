class Solution {
public:
    bool judgeSquareSum(int c) {
        long long s =0 , e = sqrt(c);

        while(s <= e){
            long long temp = s*s + e*e;

            if(temp == c)
                return true;
            else if(temp > c)
                e--;
            else
                s++;
        }

        return false;
    }
};