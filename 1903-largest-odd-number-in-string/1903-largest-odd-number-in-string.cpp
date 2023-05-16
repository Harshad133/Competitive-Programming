class Solution {
public:
    string largestOddNumber(string num) {
        
//         while(num.size() && (num[num.size()-1]-'0')%2==0)                            num.pop_back();
        
//         return num;
        
        
            
        // Frist Method of O(n) Time
      
        int i;
        for( i = num.size()-1 ; i >= 0 ; --i){
            if((num[i]-48) % 2 != 0)
                break;
        }
        
        num.resize(i+1);
        
        return num; 
    }
};