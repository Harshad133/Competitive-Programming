class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> heap(gifts.begin(),gifts.end());
        
        while(k > 0){
            int max = heap.top();
            heap.pop();
            
            heap.push(sqrt(max));
            k--;
        }
        
        long long int sum = 0;
        while(!heap.empty()){
            sum += heap.top();
            heap.pop();
        }
        
        return sum;
    }
};