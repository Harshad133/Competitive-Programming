class Solution {
    public int passThePillow(int n, int time) {
        int pilloPosition = 1;
        boolean round = true;

        while(time != 0){
            if(round)
                pilloPosition++;
            else
                pilloPosition--;

            if(pilloPosition == n || pilloPosition == 1)
                round = !round;

            time--;
        }

        return pilloPosition;
    }
}