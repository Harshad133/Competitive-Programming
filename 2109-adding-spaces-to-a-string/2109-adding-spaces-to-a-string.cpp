class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;

        int k = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            if(k < spaces.size() && spaces[k] == i){
                res.push_back(' ');
                k++;
            }
            res.push_back(s[i]);
        }

        return res;
    }
};