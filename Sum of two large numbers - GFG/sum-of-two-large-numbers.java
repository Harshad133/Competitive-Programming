//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String x = read.readLine();
            String y = read.readLine();
            Solution ob = new Solution();
            String result = ob.findSum(x, y);

            System.out.println(result);
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    String findSum(String X, String Y) {
        String res = "";
        int carry = 0;
        
        int i = X.length()-1 , j = Y.length()-1;
        
        while(i >= 0 || j >=0){
            int sum = 0;
            if(i >= 0){
                sum = sum + X.charAt(i)-48;
                i--;
            }
                
            if(j >= 0){
                sum = sum + Y.charAt(j)-48;
                j--;
            }
            
            sum = sum + carry;
            
            
                res = (sum%10) + res;
                carry = sum / 10;
            
        }
        
        if(carry != 0)
            res = carry+res;
        
        int k = 0;
        while(k < res.length() && res.charAt(k) == '0')
            k++;
            
        if(k == res.length())
            return "0";
        
        return res.substring(k);
    }
}