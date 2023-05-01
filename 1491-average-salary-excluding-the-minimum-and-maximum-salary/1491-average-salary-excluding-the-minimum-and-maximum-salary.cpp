class Solution {
public:
    double average(vector<int>& salary) {
        int max = *max_element(salary.begin(),salary.end());
        int min = *min_element(salary.begin(),salary.end());

        int sum = 0;
        for(auto i : salary){
            if(i != max && i != min)
                sum += i;
        }

        return (sum*1.00)/(salary.size()-2);
    }
};