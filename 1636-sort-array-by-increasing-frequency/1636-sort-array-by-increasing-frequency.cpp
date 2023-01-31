class Solution {
public:
    static bool cmp(pair<int,int> a , pair<int,int> b){
        if(a.second == b.second)
            return a.first > b.first;
        
        return a.second < b.second;
    }

    vector<int> frequencySort(vector<int>& a) {
        map<int,int> m;

        for(auto i : a)
            m[i]++;

        vector<pair<int,int>> temp;

        for(auto i : m)
            temp.push_back(i);

        sort(temp.begin(),temp.end(),cmp);

        vector<int> ans;
        for(auto i : temp){
            for(int j = 1;j <=i.second;j++)
                ans.push_back(i.first);
        }
        
      
        return ans;
    }
};