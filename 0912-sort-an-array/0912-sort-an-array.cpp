class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> heap(nums.begin(),nums.end());
        
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            nums[i] = heap.top();
            heap.pop();
        }
        
        return nums;
    }
};