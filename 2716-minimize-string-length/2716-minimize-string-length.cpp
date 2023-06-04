class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> a(26,0);
        int ans=0;
        
        for(auto x:s)
        {
            a[x-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                ans+=1;
            }
        }
        return ans;
    }
};