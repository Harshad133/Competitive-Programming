class Solution {
public:
    void solve(string digit, string output, int index, vector<string>& ans, string map[]){
        //base case
        if(index >= digit.length()){
            ans.push_back(output);
            return;
        }

        int num = digit[index]-'0'; //To get integer value corresponding to string
        string val = map[num];
        for(int i=0; i<val.length(); i++){
            output.push_back(val[i]);
            solve(digit, output, index+1, ans, map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
        string output;
        int index = 0;
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, map);
        return ans;
    }
};