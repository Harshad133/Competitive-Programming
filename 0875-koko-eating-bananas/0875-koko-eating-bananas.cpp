class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low <= high){
            int k = (low+high) >> 1;

            long long int hour = 0;
            for(auto i : piles){
                if(i <= k)
                    hour++;
                else{
                    hour += (i/k);
                    if(i % k)
                        hour++;
                }
            }

            if(hour > h)
                low = k+1;
            else
                high = k-1;
        }

        return low;
    }
};