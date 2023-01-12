class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        // Your code here
        int esum=0,sum = INT_MIN;

  for(int i =0 ; i < arr.size() ; i++ )
  {
    esum = esum + arr[i];

    if(sum <= esum)
      sum = esum;

    if(esum < 0)
      esum = 0;
  }

  return sum;
        
    }
};