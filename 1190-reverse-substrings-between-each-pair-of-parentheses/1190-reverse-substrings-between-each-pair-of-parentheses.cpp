class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> stack;

        for(int i = 0; i < s.size() ; i++){
            if(s[i] == '(')
                stack.push(i);
            else if(s[i] == ')'){
                int t = stack.top();
                stack.pop();

                reverse(s.begin()+t,s.begin()+i+1);
            }
        }

        string res;

        for(auto i : s)
            if(i != '(' && i != ')')
                res += i;

        return res;
    }
};