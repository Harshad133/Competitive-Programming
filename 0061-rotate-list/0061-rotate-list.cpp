/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)
            return head;

        ListNode *temp = head;
        int n = 1;
        while(temp->next != NULL){
            n++;
            temp = temp->next;
        }
        k = k % (n);
        k = n-k;
        temp->next = head;

        while(k--)
            temp = temp->next;
        
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};