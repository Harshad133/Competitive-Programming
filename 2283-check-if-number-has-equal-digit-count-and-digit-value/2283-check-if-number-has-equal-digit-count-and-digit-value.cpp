class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m;

        for(auto i : num)
            m[i-48]++;

        for(int i = 0 ; i < num.size(); i++){
            if(m.find(i) == m.end())
                if(num[i]-48 != 0)
                return false;

            if(m[i] != num[i]-48)
                return false;
        }

        return true;
    }
}; 