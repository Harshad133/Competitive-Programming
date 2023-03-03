class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int l = 0 , s = 0 , j;
        for(int i = 0 ; i < haystack.size() ; i++){
            if(haystack[i] == needle[0]){
                for(j = i+1,l=1; j < haystack.size() && l < needle.size() ; j++){
                    if(haystack[j] == needle[l])
                        l++;
                    else
                        break;
                }

                if(l == needle.size())
                    return i;
                // i = j-1;
            }
        }

        return -1;
    }
};