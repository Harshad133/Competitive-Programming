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
    int num(ListNode *head,int &two){
        if(head->next == NULL){
            two = two * 2;
            return head->val;
        }

        int ans = num(head->next,two)+(head->val*two);
        two = two * 2;

        return ans;
    }
    int getDecimalValue(ListNode* head) {
        int t = 1;
        return num(head,t);
    }
};