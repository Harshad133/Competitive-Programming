class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(),stones.end());

        int y ,x;

        while(!heap.empty()){
            y = heap.top();
            heap.pop();

            if(heap.empty())
                break;

            x = heap.top();
            heap.pop();
            
            if(x != y){
                y = y-x;
                heap.push(y);
            }
            else if(x == y && heap.empty())
                return 0;
        }

        return y;
    }
};