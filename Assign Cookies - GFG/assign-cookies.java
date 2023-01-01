//{ Driver Code Starts
//Initial Template for Java

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
      int m = sc.nextInt();
      int a[] = new int[n];
      for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
      }
      int b[] = new int[m];
      for(int i=0;i<m;i++){
        b[i]=sc.nextInt();
      }
      
      Solution obj = new Solution();
      int ans = obj.maxChildren(n, m,a, b);
      System.out.println(ans);
    }
  }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    static int maxChildren(int N,int M,int g[], int s[]) {
        Arrays.sort(g);
        Arrays.sort(s);

        int i = 0 , j = 0 ;
        int count = 0;
        while(i < g.length && j < s.length){
            while(j < s.length && g[i] > s[j])
                j++;
            if(j < s.length){
                i++;
                j++;
                count++;
            }
            else
                return count;
        }

        return count;

  }
}
     