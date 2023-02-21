class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low = 0 ,high = arr.size()-1 , mid;
        
        if(arr.size() == 1)
            return arr[0];
       
       while(low <= high)
       {
            mid=(low+high)/2;
            
            if(mid == 0 || mid==arr.size()-1 || (arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]))
                break;
                
            else if(arr[mid] == arr[mid+1])
                if(mid % 2 == 0)
                    low = mid+1;
                else 
                    high = mid;
            else if(arr[mid] == arr[mid-1])
                if(mid % 2 == 0)
                    high = mid;
                else 
                    low = mid+1;
       }
       
       
      return arr[mid]; 
    }
};