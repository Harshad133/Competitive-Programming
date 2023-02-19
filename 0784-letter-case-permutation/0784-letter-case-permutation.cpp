class Solution {
public:
    char flip(char s){
        if(s >= 'a' && s <= 'z')
            s -= 32;
        else if(s >= 'A' && s <= 'Z')
            s += 32;
        else
            s = '$';

        return s;
    }
    
    void permutaion(string s , int i , string ans,vector<string> &res){
        if(i >= s.size()){
            res.push_back(ans);
            return;
        }

        ans+= s[i];
        permutaion(s,i+1,ans,res);
        ans.pop_back();
        char t = flip(s[i]);

        if(t != '$'){
            ans+=t;
            permutaion(s,i+1,ans,res);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        permutaion(s,0,"",res);

        return res;
    }
};