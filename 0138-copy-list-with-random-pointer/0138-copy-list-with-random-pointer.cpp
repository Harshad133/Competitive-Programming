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
        if(head == NULL)
            return NULL;

        Node* ans = new Node(head->val) , *temp = ans , *i = head->next;

        map<Node*,Node*> add;
        add[head] = ans;

        while(i != NULL){
            temp->next = new Node(i->val);
            temp = temp->next;
            add[i] = temp;
            i = i->next;
        }

        for(auto i : add){
            if(i.first->random == NULL)
                i.second->random = NULL;
            else
                i.second->random = add[i.first->random];
        }

        return ans;
    }
};