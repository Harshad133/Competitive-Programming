class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even;

        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());

        int o=0,e = 0;
        for(int i = 0 ; i < nums.size() ; i+=2){
            if(e < even.size())
                nums[i] = even[e++];
            if(o < odd.size())
                nums[i+1] = odd[o++];
        }

        return nums;
    }
};
