class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double m ;
        if(coordinates[1][0]==coordinates[0][0])
            m = INT_MIN;
        else
            m = (double)(coordinates[1][1]-coordinates[0][1]) / (coordinates[1][0]-coordinates[0][0]);

        for(int i = 2 ; i < coordinates.size() ; i++){
            double temp;

            if(coordinates[i][0]==coordinates[i-1][0])
                temp = INT_MIN;
            else
                temp = (double)(coordinates[i][1]-coordinates[i-1][1]) / (coordinates[i][0]-coordinates[i-1][0]);

            if(temp != m)
                return false;
        }

        return true;
    }
};