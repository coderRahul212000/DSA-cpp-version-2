/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    
    //when number of nodes is not a multiple of k, the left over ones are not to be reversed
    int size = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    if(size < k) return head;
    //base call
    if(head == NULL){
        return NULL;
    }

    //step:1 reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while( curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step:2 Recursion dekhlega aage ka
    if(next != NULL){
        head -> next = kReverse(next,k);
    }

    //step:3 return head of reversed list
    return prev;
}