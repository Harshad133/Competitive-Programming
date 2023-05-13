class Solution {
public:
    int max = pow(2,31) - 1;
    int min = -pow(2,31);
    
    int reverse(int x) {
        long int a = x;
        long int r = 0;
        int temp;
        
//         if(x < 0)
//             a = -a;
        
//         cout<<" a = "<<a;
        
        while(a != 0){
          temp = a % 10;
          r = r * 10 + temp;
          a = a / 10;
        }
       
//         if(x < 0)
//             r = -r;
//          cout<<" r = "<<r;
        
        
//         cout<<" min = "<<min<<endl<<" Max = "<<max;
        if(r > max || r < min)
            return 0;
        
        
        return r;
    }
};