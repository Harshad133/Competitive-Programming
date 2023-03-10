/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    private int length;
    private ListNode head;
    private Random rand;

    public Solution(ListNode head) {
        rand = new Random();
        this.head = head;
        ListNode temp = this.head;
        length = 0;
        while(temp != null){
            length++;
            temp = temp.next;
        }
    }
    
    public int getRandom() {
        int index = rand.nextInt(length);
        ListNode temp = this.head;

        while(index != 0){
            temp = temp.next;
            index--;
        }

        return temp.val;
    }
}

//SECOND METHOD

// class Solution {
//     Random r;
//     int size;
//     int[] arr;
//     public Solution(ListNode head) {
//         r = new Random();
//         ListNode cur = head;
//         while (cur != null) {
//             size++;
//             cur = cur.next;
//         }
//         arr = new int[size];
//         int i = 0;
//         cur = head;
//         while (cur != null) {
//             arr[i++] = cur.val;
//             cur = cur.next;
//         }
//     }   
//     public int getRandom() {
//         int x = r.nextInt(size);
//         return arr[x];
//     }
// }

