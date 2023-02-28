class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        double total = (double)m * (double)k, n = bloomDay.size();
        if(total > n) return -1;
        
        int high = 1e9;
        int low = 1;

        while(low <= high){ 
            int mid = (low+high) >> 1;

            int count = 0 , gcount=0;
            for(auto i : bloomDay){
                if(i > mid)
                    count = 0;
                else{
                    count++;
                    if(count == k){
                        count = 0;
                        gcount++;
                    }
                }
            }

            if(gcount < m)
                low = mid + 1;
            else
                high = mid-1;
        }

        // if(ans == INT_MAX)
        //     return -1;

        return low;
    }
};