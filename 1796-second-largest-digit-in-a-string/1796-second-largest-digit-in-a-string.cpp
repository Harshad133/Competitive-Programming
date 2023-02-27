class Solution {
public:
    int secondHighest(string s) {
        // set<int, greater<int>> st {};
        // for (const char &c : s)
        // {
        //     if (c >= '0' && c <= '9')
        //     {
        //         st.insert(c - '0');
        //     }
        // }
        // auto it = begin(st);
        // return (st.size() >= 2) ? *(++it):-1;
        
        int m1 = INT_MIN , m2 = INT_MIN;

        for(auto i : s){
            if(i >= '0' && i <= '9'){
                if(i-48 > m1){
                    m2 = m1;
                    m1 = i-48;
                }
                else if(i-48 < m1 && i-48 > m2)
                    m2 = i-48;
            }
        }

        if(m2 == INT_MIN)
            return -1;

        return m2;
    }
};