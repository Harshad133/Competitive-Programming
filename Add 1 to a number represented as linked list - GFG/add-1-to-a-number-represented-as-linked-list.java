//{ Driver Code Starts
import java.io.*;
import java.util.*;
class Node
{
    int data;
    Node next;
    
    Node(int x)
    {
        data = x;
        next = null;
    }
}
class GfG
{
    public static void printList(Node node) 
    { 
        while (node != null)
        { 
            System.out.print(node.data);
            node = node.next; 
        }  
        System.out.println();
    } 
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Node head = new Node( s.charAt(0) - '0' );
                    Node tail = head;
                    for(int i=1; i<s.length(); i++)
                    {
                        tail.next = new Node( s.charAt(i) - '0' );
                        tail = tail.next;
                    }
                    Solution obj = new Solution();
                    head = obj.addOne(head);
                    printList(head); 
                }
        }
}
// } Driver Code Ends


/*
class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
} 
*/

class Solution
{
    public static int add(Node head){
        if(head == null)
            return 0;
            
        int carry = add(head.next);
        
        int result = 0;
        
        if(head.next == null)
            result = 1 + head.data + carry;
        else
            result = head.data + carry;
            
        head.data = result % 10;
        
        return result/10;
    }
    
    public static Node addOne(Node head) 
    { 
        if(add(head) == 1){
            Node temp = new Node(1);
        
            temp.next = head;
            head = temp;
        }
        
        return head;
    }
}
