class Solution {
public:
    string reorganizeString(string s) {
        vector<pair<int,char>> alpha(26,{0,0});

        int limit = 0;
        if(s.size() % 2 ==0)
            limit = s.size()/2;
        else
            limit = (s.size()/2)+1;

        for(auto i: s){
            alpha[i-97].second = i;
            alpha[i-97].first++;

            if(alpha[i-97].first > limit)
                return "";
        }

        sort(alpha.begin(),alpha.end(),greater<pair<int,char>>());

        int k = 0;
        for(int i = 0 ; i < s.size() ; i+=2){
            if(alpha[k].first == 0)
                k++;
            
            s[i] = alpha[k].second;
            alpha[k].first--;
        }

        for(int i = 1 ; i < s.size() ; i+=2){
            if(alpha[k].first == 0)
                k++;
            
            s[i] = alpha[k].second;
            alpha[k].first--;
        }
        
        return s;
    }
};