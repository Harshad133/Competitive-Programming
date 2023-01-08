class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> heap;
        
        for(auto i : nums)
            heap.push(i);
        
        long long int score = 0;
        while(k != 0){
            int t = heap.top();
            heap.pop();
            // cout<<t<<endl;
            score += t;
            
            heap.push(ceil(t/3.0));
            // cout<<heap.top()<<endl;
            k--;
        }
        
        return score;
    }
};