class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& s) {
        sort(s.begin(),s.end());
		    vector<vector<int>> res;
		    res.push_back(s);
		    
		    while(next_permutation(s.begin(),s.end())){
		        res.push_back(s);
		    }
		    
		    return res;
    }
};