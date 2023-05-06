class Solution {
public:
    string reverseOnlyLetters(string s) {
        // if(s == "-")
        //     return s;

        int i = 0 , j = s.size()-1;

        while(i < j){
            while(i < s.size() && (s[i] < 'A' || s[i] > 'Z')&&(s[i] < 'a' || s[i] > 'z'))
                i++;

            while(j >= 0 && (s[j] < 'A' || s[j] > 'Z')&&(s[j] < 'a' || s[j] > 'z'))
                j--;

            if(i < j)
                swap(s[i],s[j]);
            i++;
            j--;
        }

        return s;
    }
};