class Solution {
public:
     bool timeEnough(vector<int>& time, long long givenTime, int totalTrips) {
        long long actualTrips = 0;
        for (int t : time) {
            actualTrips += givenTime / t;
        }
        // cout<<"mid = "<<givenTime<<" currentTrips = "<<actualTrips<<endl;
        return actualTrips >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int low = 1 , high =  1LL * *max_element(time.begin(), time.end()) * totalTrips , mid;
        
        while(low < high){
          mid = (low+high) >> 1;

          if(timeEnough(time,mid,totalTrips))
            high = mid;
          else
            low = mid+1;
        }
      
        return low;
    }
};