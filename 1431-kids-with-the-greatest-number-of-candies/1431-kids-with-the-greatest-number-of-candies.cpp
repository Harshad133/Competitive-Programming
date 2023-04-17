class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;

        for(int i =0 ; i < candies.size() ; i++)
            if(max < candies[i])
                max = candies[i];

        vector<bool> result(candies.size());
        for(int i =0 ; i < candies.size() ; i++){
            if(candies[i]+extraCandies >= max)
                result[i] = true;
        }

        return result;
    }
};