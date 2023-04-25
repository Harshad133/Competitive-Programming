class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0 , bit1 = 0 , bit2 = 0 , bit3 = 0;

        while(a != 0 || b != 0 || c != 0){
            bit1 = a & 1;
            bit2 = b & 1;
            bit3 = c & 1;

            if((bit1 | bit2) != bit3)
                if(bit1 && bit2)
                    count+=2;
                else
                    count++;

            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }

        return count;
    }
};