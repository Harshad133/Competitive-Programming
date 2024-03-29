//{ Driver Code Starts
//Initial Template for Java



import java.io.*;
import java.util.*;


// } Driver Code Ends
//User function Template for Java


class GFG
{
    ArrayList<Long> find(long nums[], int n, int target)
    {
        int find = Arrays.binarySearch(nums,target);
        
        if(find <0)
            return new ArrayList<>(Arrays.asList((long)-1,(long)-1));
        
        int start = find-1 , end = find+1;
        //System.out.println(start);
        
        while(start >=0 && start < nums.length && nums[start] == nums[find])
            start--;
        
        start++;
        
        
        
        while(end >= 0 && end < nums.length && nums[end] == nums[find])
            end++;
        
        end--;
        
        return new ArrayList<>(Arrays.asList((long)start,(long)end));
    }
}




//{ Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main(String[] args) throws IOException {
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());
        // looping through all testcases
        while (testcases-- > 0) {
//            int n = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] q = line.trim().split("\\s+");
            int n =Integer.parseInt(q[0]);
            int x =Integer.parseInt(q[1]);
//            //int y =Integer.parseInt(q[2]);
            String line1 = br.readLine();
            String[] a1 = line1.trim().split("\\s+");
            long arr[] = new long[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Long.parseLong(a1[i]);
            }
            GFG ob = new GFG();
            ArrayList<Long> ans=ob.find(arr,n,x);
            System.out.println(ans.get(0)+" "+ans.get(1));
        }
    }
}

// } Driver Code Ends