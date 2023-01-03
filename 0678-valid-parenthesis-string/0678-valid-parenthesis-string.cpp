class Solution {
public:
    bool checkValidString(string s) {

        stack<pair<int,char>> s1;
        stack<pair<int,char>> s2;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '*')
                s2.push({i,s[i]});
            else if(s[i] == '(')
                s1.push({i,s[i]});
            else if(s[i] == ')'){
                if(s1.empty())
                    if(!s2.empty())
                        s2.pop();
                    else 
                        return false;
                else
                    s1.pop();
            }
        }

        // cout<<star<<" "<<stack.size();
        if(!s1.empty()){
            if(s2.size() < s1.size())
                return false;
            else{
                while(!s1.empty()){
                    if(s2.empty())
                        return false;

                    if(s1.top().first < s2.top().first){
                        s1.pop();
                        s2.pop();
                    }
                    else
                        return false;
                }
            }
        }

        return true;
    }
};