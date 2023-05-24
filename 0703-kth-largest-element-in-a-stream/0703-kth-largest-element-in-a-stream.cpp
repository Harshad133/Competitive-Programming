class KthLargest {
public:
struct A
{
bool operator()(int a, int b)
{
    return a<b;
}
};
    KthLargest(int k, vector<int>& nums) {
        K =k;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(pq.size() > k)
            pq.pop();
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > K) 
        pq.pop();
        return pq.top();
        
    }
    priority_queue<int, vector<int>, greater<int>>pq;
    int K;
};