class Solution {
public:
    int dayofweek(int d, int m, int y)
{
    int t[] = { 0, 3, 2, 5, 0, 3,5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ((y + y / 4 - y / 100 +y / 400 + t[m - 1] + d) % 7);
}
    string dayOfTheWeek(int day, int month, int year) {
       vector<string> ans{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
        int index = dayofweek(day,month,year);
        cout<<index;
       return ans[index];
    }
};