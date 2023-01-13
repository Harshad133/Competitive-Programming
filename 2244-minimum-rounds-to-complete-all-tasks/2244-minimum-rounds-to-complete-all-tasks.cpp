class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        for (int &d : tasks) {
            m[d]++;
        }
        int ans = 0;
        for (auto &p : m) {
            int d = p.second / 3, r = p.second % 3;
            if (d == 0 && r == 1) {
                return -1;
            }
            ans += d + (r > 0);
        }
        return ans;
    }
};