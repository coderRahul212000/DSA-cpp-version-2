/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/
// it will return head of the reverse list
Node* reverse1(Node* head){
  //base class
  if(head == NULL || head->next == NULL){ //ya toh list empty hai ya fir ek element hai
      return head;
  }

  Node* chhotaHead = reverse1(head->next);

  head->next->next = head;
  head->next = NULL;
  return chhotaHead;
}

Node* reverseLinkedList(Node *head)
{
    return reverse1(head);
}
