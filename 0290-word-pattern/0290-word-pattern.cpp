class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string dummy;
        map<char,string> m1;
        map<string,char> m2;
        vector<string> word;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' '){
                word.push_back(dummy);
                dummy = "";
            }
            else
                dummy = dummy + s[i];
        }
        word.push_back(dummy);

        if(word.size() != pattern.size())
            return false;

        for(int i = 0 ; i < pattern.size() ; i++){
            if(m1.find(pattern[i]) != m1.end()){
                if(m1[pattern[i]] != word[i])
                    return false;
            }
            else
                m1[pattern[i]] = word[i];
        }

        for(int i = 0 ; i < word.size() ; i++){
            if(m2.find(word[i]) != m2.end()){
                if(m2[word[i]] != pattern[i])
                    return false;
            }
            else
                m2[word[i]] = pattern[i];
        }

        return true;
    }
};