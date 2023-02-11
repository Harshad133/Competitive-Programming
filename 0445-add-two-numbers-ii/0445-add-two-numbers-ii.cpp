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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> num1;
        stack<int> num2;
        
        ListNode *temp = l1;
        while(temp != NULL){
            num1.push(temp->val);
            temp=temp->next;
        }
        
        temp = l2;
        while(temp != NULL){
            num2.push(temp->val);
            temp=temp->next;
        }
        
        int sum = 0 , carry = 0;
        // int i = a.size()-1 , j = b.size()-1;
        
        stack<int> num3;

        while(!num1.empty() || !num2.empty()) {
            sum = 0;
            int d1 = 0, d2 = 0;
            
            if(!num1.empty()){
                d1 = num1.top();
                num1.pop();
            }
            
            if(!num2.empty()){
                d2 = num2.top();
                num2.pop();
            }

            sum = d1+d2+carry;
            // cout<<d1<<" "<<d2<<endl;
            num3.push(sum % 10);
            carry = sum / 10;
        }

        if(carry != 0)
            num3.push(carry);
        
        ListNode* res = new ListNode(num3.top());
        temp = res;
        num3.pop();
        
        while(!num3.empty()){
            temp->next = new ListNode(num3.top());
            temp = temp->next;
            num3.pop();
        }

        return res;
    }
};