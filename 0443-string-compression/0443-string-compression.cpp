class Solution {
public:
    int compress(vector<char>& chars) {
//         if(chars.size() == 1)
//             return 1;

//         int count = 1 , k = 0;
//         vector<char> s;

//         for(int i = 0 ; i < chars.size() ; i = k+1){
//             if(i == chars.size()-1){
//                 s.push_back(chars[i]);
//                 break;
//             }

//             k = i;
//             count = 1;

//             while(k < chars.size()-1 && chars[k] == chars[k+1]){
//                 count++;
//                 k++;
//             }

//             s.push_back(chars[i]);
//             if(count > 1){
//                 string temp = to_string(count);
//                 // cout<<temp<<endl;
//                 for(auto j : temp)
//                     s.push_back(j);
//             }
//         }
//         chars = s;
//         return s.size();
      
       int i = 0, res = 0;
        while (i < chars.size()) {
            int groupLength = 1;
            while (i + groupLength < chars.size() && chars[i + groupLength] == chars[i]) {
                groupLength++;
            }
            chars[res++] = chars[i];
            if (groupLength > 1) {
                for (char c : to_string(groupLength)) {
                    chars[res++] = c;
                }
            }
            i += groupLength;
        }
        return res;
    }
};