class Solution {
public:
    int hammingDistance(int x, int y) {
        long long int count = 0;
        while(x != 0 || y != 0){
            int b1 = x & 1;
            int b2 = y & 1;

            if(b1 != b2)
                count++;
            x = x >> 1;
            y = y >> 1;
        }

        return count;
    }
};