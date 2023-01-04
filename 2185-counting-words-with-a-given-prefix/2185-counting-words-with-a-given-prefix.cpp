class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0,i;
        
        for(auto w : words){
            for(i = 0 ; i < pref.size() ; i++)
                if(w[i] != pref[i])
                    break;
            if(i == pref.size())
                count++;
        }
        
        return count;
    }
};