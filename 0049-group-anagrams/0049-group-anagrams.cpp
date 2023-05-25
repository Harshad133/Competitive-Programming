class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<string> s = strs;
        
        map<string,vector<int>> m;
        for(int i = 0 ; i < s.size() ; i++){
            string st = s[i];
            sort(st.begin(),st.end());
            m[st].push_back(i);
        
        }
            // sort(s[i].begin(),s[i].end());
        
        // sort(s.begin(),s.end());
        
        vector<vector<string>> ans;
        
        
//         for(int i = 1 ; i < s.size() ; i++)
//             m[s[i]].push_back(strs[i]);
        
//         int j = 0;
        for (auto i : m)
        {
            // ans[j++]=i.second;
            if(i.second.size() > 0){
                vector<int>v = i.second;
                vector<string>vt;
                for(auto j : v){
                    vt.push_back(strs[j]);
                    
                }
                ans.push_back(vt);
            }
        }

        
        return ans;
    }
};