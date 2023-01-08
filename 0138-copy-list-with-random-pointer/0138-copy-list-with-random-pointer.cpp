/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //solution with O(N) space O(N)Time

        if(head == NULL)
            return NULL;

        // Node* ans = new Node(head->val) , *temp = ans , *i = head->next;

        // map<Node*,Node*> add;
        // add[head] = ans;

        // while(i != NULL){
        //     temp->next = new Node(i->val);
        //     temp = temp->next;
        //     add[i] = temp;
        //     i = i->next;
        // }

        // for(auto i : add){
        //     if(i.first->random == NULL)
        //         i.second->random = NULL;
        //     else
        //         i.second->random = add[i.first->random];
        // }

        // return ans;


        //Soultion With O(1) space O(N) Time 

        Node* temp = head;

        while(temp != NULL){
            Node* i = new Node(temp->val);

            i->next = temp->next;
            temp->next = i;

            temp = temp->next->next;
        }

        temp = head;

        while(temp != NULL){
            if(temp->random == NULL)
                temp->next->random = NULL;
            else
                temp->next->random = temp->random->next;

            temp = temp->next->next;
        }

        temp = head;
        Node* ans = temp->next , *d = ans;

        while(temp != NULL){
            temp->next = d->next;
            if(d->next != NULL)
                d->next = d->next->next;

            temp = temp->next;
            d = d->next;
        }

        return ans;
    }
};