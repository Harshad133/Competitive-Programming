class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size() , high = 0 , low = 1;
        for(auto i : weights){
            high += i;
            if(i > low)
                low = i;
        }

        // int low = *max_element(weights.begin(),weights.end());

        while(high >= low){
            int mid = (low+high) >> 1;

            int d = 1,sum = 0;
            for(auto i : weights){
                sum += i;
                if(sum > mid){
                    sum -= i;
                    d++;
                    sum = i;
                }
            }

            if(d <= days)
                high = mid-1;
            else
                low = mid+1;
        }

        return low;
    }
};