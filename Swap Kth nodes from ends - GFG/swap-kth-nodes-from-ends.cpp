//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    if(K > num)
        return head;
    
    Node *t1 = head, *t2 = head , *p1 = NULL , *p2 = NULL;
        int k = K;
        while(k > 1){
            k--;
            p1 = t1;
            t1 = t1->next;
        }
        k = num-K+1;
        while(k > 1){
            k--;
            p2 = t2;
            t2 = t2->next;
        }
        
        if(p1 == NULL){
            p2->next = t1;
            swap(t1->next,t2->next);
            head = t2;
            // cout<<head->next->data;
        }
        else if(p2 == NULL){
            p1->next = t2;
            swap(t2->next,t1->next);
            head = t1;
        }
        else{
            p1->next = t2;
            p2->next = t1;
            swap(t1->next,t2->next);
        }
        
        return head;
}
