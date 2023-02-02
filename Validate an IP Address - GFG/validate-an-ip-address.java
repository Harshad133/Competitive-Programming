//{ Driver Code Starts
// Initial Template for Java

// Initial Template for Java

import java.util.*;
import java.io.*;

  public class validip {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            String s = sc.next();
            Solution obj = new Solution();

            if (obj.isValid(s))
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {

    public boolean isValid(String s) {
        String[] list = s.split("\\.");
        
        if(s.charAt(0) == '.'|| s.charAt(s.length()-1) == '.')
            return false;
        
        if(list.length != 4)
            return false;
        
        for(String i : list){
            // if(!StringUtils.isNumeric(i))
            //     return false;
            
            if(i.length() == 0 || i.length() > 3)
                return false;
            
            if(i.charAt(0) == '0' && i.length() > 1)
                return false;
            try{ 
                if(Integer.parseInt(i) > 255)
                    return false;
            }
            catch(Exception e){
                return false;
            }
        }
        
        return true;
    }
}