class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int low = *min_element(bloomDay.begin(),bloomDay.end());

        int  ans = INT_MAX;
        cout<<low<<" "<<high;

        while(low <= high){ 
            int mid = (low+high) >> 1;

            int count = 0 , gcount=0;
            for(auto i : bloomDay){
                if(i > mid)
                    count = 0;
                else{
                    count++;
                }
                if(count == k){
                    count = 0;
                    gcount++;
                }
                if(gcount == m)
                    break;
            }

            if(gcount == m){
                if(mid < ans)
                    ans = mid;
                high = mid-1;
            }
            else
                low = mid + 1;
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};