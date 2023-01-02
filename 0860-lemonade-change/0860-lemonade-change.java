class Solution {
    public boolean lemonadeChange(int[] bills) {
        int[] value = new int[3];

        for(int i = 0 ; i < bills.length ; i++){
            if(bills[i] == 5)
                value[0]++;
            else if(bills[i] == 10){
                if(value[0] >= 1){
                    value[0]--;
                    value[1]++;
                }
                else
                    return false;
            }
            else if(bills[i] == 20){
                if(value[1] >= 1)
                    if(value[0] >=1){
                        value[1]--;
                        value[0]--;
                        value[2]++;
                    }
                    else
                        return false;
                else if(value[0] >= 3){
                    value[0] -= 3;
                    value[2]++;
                }
                else 
                    return false;
            }
        }

        return true;
    }
}