class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos = 0,neg = 0;

        for(auto i : nums)
            if(i > 0)
                pos++;
            else if(i < 0)
                neg++;
            else
                return 0;

        if(neg % 2 != 0)
            return -1;
        return 1;
    }
};