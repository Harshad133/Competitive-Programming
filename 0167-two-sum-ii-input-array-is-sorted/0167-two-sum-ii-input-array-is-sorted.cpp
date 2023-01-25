class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> res(2);
        
        int low = 0 , high = numbers.size()-1;
        
        while(low < high){
            int sum = numbers[low]+numbers[high];
            
            if(sum == target)
                break;
            else if(sum > target)
                high--;
            else
                low++;
        }
        
        return {low+1,high+1};
    }
};