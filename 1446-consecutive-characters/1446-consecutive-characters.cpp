class Solution {
public:
    int maxPower(string s) {
        int count = 0 , max = 1;

        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == s[i+1])
                count++;
            else{
                count++;
                if(count > max)
                    max = count;
                count = 0;
            }

        }

        if(count != 0 && count+1 > max)
            max = count+1;

        return max;
    }
};