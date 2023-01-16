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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> heap;

        for(auto i : lists){
            ListNode *temp = i;
            while(temp != NULL){
                heap.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode *res = new ListNode(0) , *temp = res;
        while(!heap.empty()){
            temp->next = new ListNode(heap.top());
            heap.pop();
            temp = temp->next;
        }

        return res->next;


    }
};