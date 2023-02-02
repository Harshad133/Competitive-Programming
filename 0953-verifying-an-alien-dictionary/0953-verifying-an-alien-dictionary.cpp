class Solution {
public:
    int cmp(string w1 , string w2 , map<char,int> m){
        if(w1 == w2)
            return 0;

        int mi = min(w1.size(),w2.size());
        // int ma = max(w1.size(),w2.size())

        int i = 0;
        while(i < mi){
            if(w1[i] == w2[i])
                i++;
            else
                return m[w1[i]]-m[w2[i]];
        }

        if(i < w1.size())
            return 1;
        return -1;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m;
        for(int i = 0 ; i < order.size() ; i++)
            m[order[i]] = i+1;

        for(int i =0 ; i < words.size()-1 ; i++){
            if(cmp(words[i],words[i+1],m) > 0)
                return false;
        }

        return true;
    }
};