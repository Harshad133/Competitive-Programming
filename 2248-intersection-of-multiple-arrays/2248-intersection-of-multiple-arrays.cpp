class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> res;
      
        map<int,int> m;

        for(auto i : nums)
            for(auto j : i)
                m[j]++;

        for(auto i : m)
            if(i.second == nums.size())
                res.push_back(i.first);

        return res;
    }
};