class Solution {
public:
    vector<string> res;
    void permutaion(string s , int i , string ans){
        if(i >= s.size()){
            res.push_back(ans);
            return;
        }

        if(s[i] >= '0' && s[i] <= '9'){
            ans += s[i];
            permutaion(s,i+1,ans);
            return;
        }

        ans+= s[i];
        permutaion(s,i+1,ans);

        if(s[i] >= 'A' && s[i] <= 'Z')
            ans.back() += 32;
        else
            ans.back() -= 32;
        
        permutaion(s,i+1,ans);
    }

    vector<string> letterCasePermutation(string s) {
        permutaion(s,0,"");

        return res;
    }
};