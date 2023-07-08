class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while(start <= end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }

    void partition(int index,string s,vector<string>& part,vector<vector<string>>& res){
        if(index == s.size()){
            res.push_back(part);
            return;
        }

        for(int i = index ; i <s.size() ; i++){
            if(isPalindrome(s,index,i)){
                part.push_back(s.substr(index,i-index+1));
                partition(i+1,s,part,res);
                part.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> part;
        partition(0,s,part,res);

        return res;
    }
};