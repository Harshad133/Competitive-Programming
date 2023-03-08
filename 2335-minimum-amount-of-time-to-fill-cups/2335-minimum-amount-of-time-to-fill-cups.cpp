class Solution {
public:
    int fillCups(vector<int>& amount) {
        int second = 0;
        priority_queue<int> heap(amount.begin(),amount.end());
        int f ,s;
        while(1){
            f = heap.top();
            heap.pop();
            s = heap.top();
            heap.pop();
            if(f == 0 && s == 0)
                break;
            f = f > 0 ? f-1 : f;
            s = s > 0 ? s-1 : s;
            second++;
            heap.push(f);
            heap.push(s);
        }
        return second;
    }
};