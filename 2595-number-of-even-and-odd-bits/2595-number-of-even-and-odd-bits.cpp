class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0 , i = 0;

        while(n != 0){
            if(i % 2 == 0)
                even += (n & 1);
            else
                odd += (n & 1);

            n = n >> 1;
            i++;
        }

        return {even,odd};
    }
};