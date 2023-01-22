// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int i = 1 , j = n , mid;
        
        while(i <= j){
            mid = (i+j)/2;
            
            if(isBadVersion(mid))
                if(!isBadVersion(mid-1))
                    break;
                else
                    j = mid-1;
            else
                i = mid+1;
        }
        
        return mid;
    }
};