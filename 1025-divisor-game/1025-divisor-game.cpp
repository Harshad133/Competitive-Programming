class Solution {
public:
    bool divisorGame(int n) {
        // int turn = 1;

        // while(n != 1){
            
        //     int x;
        //     for(x=1;x<n;x++)
        //         if(n % x == 0)
        //             break;
        //     n=n-x;
        //     turn = 1-turn;
        // }

        // if(!turn)
        //     return true;
        // return false;

        if(n%2==0){
            return true;
        }
        return false;
    }
};