class Solution {
public:
    string addBinary(string a, string b) {
        int sum = 0 , carry = 0;
        int i = a.size()-1 , j = b.size()-1;
        string res;

        while(i >= 0 || j >=0) {
            sum = 0;
            int d1 = i >= 0 ? a[i]-48 : 0;
            int d2 = j >= 0 ? b[j]-48 : 0;

            sum = d1+d2+carry;
            // cout<<d1<<" "<<d2<<endl;
            res = (char)((sum & 1)+48) + res;
            carry = (sum >> 1);
            i--;
            j--;
        }

        if(carry != 0)
            res = (char)(carry+48) + res;

        return res;
    }
};