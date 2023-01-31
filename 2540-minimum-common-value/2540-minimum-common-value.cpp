#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

auto _ = [](){
    cin.tie(0)->sync_with_stdio(0);
    return 0;
}();


class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            if(binary_search(nums2.begin(),nums2.end(),nums1[i]))
                return nums1[i];
        }
        
        return -1;
    }
};