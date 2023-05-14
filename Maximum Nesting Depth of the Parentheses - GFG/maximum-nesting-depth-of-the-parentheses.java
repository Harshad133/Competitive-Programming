//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            sc.nextLine();
            String s;
            s = sc.next();
            
            Solution obj = new Solution();
            int res = obj.maxDepth(s);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends


class Solution {
    public static int maxDepth(String s) {
        Stack<Character> stack = new Stack<>();
        int max = 0;

        for(int i = 0 ; i < s.length() ; i++){
            if(s.charAt(i) == '(')
                stack.push(s.charAt(i));
            else{
                int temp = stack.size();
                if(max <= temp)
                    max = temp; 
                if(s.charAt(i) == ')')
                    stack.pop();
            }
        }

        return max;
    }
}
        
