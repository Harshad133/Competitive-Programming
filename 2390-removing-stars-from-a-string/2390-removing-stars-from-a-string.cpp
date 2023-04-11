class Solution {
public:
    string removeStars(string s) {
        int i = 0 , j = 0 ,n = s.size();

        for(j = 0 ; j < n ; j++ , i++){
            s[i] = s[j];
            if(s[i] == '*')
                i-=2;
        }

        return s.substr(0,i);
    }
};