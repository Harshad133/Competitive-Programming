//{ Driver Code Starts
// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.math.*;
import java.io.*;

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            Solution obj = new Solution();
            boolean ans = obj.lemonadeChange(n, a);
            System.out.println(ans ? "True" : "False");
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    static boolean lemonadeChange(int N, int bills[]) {
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
