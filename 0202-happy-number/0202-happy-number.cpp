class Solution {
public:
    bool isHappy(int n) {
        
//         int sum = 0;
        
//         while(n != 1){
//             while(n != 0){
//                 sum = sum + (n%10)*(n%10);
//                 n = n /10;
//             }
            
//             n = sum;
//             sum = 0;
//             if(n == 4)
//                 return false;
            
//             // cout<<"n = "<<n<<endl;
//         }
//         return true;
        
        
        if(n == 1)
                return true;
        
        int sum = 0;
            while(n != 0){
                sum = sum + (n%10)*(n%10);
                n = n /10;
            }
            
            n = sum;
            sum = 0;
            if(n == 4)
                return false;
            
        return isHappy(n);
            // cout<<"n = "<<n<<endl;
        
        
    }
};