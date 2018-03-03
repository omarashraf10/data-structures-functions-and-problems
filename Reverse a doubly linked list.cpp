/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head==NULL||head->next==NULL)
        return head;
    else
    {
        int size=1;
        Node* p=head;
        while(p->next)
        {
            size++;
            p=p->next;
        }
        Node* prv=p;
        p=head;
        for(int i=0;i<size/2;i++)
        {
            Node* temp;
            temp->data=p->data;
            p->data=prv->data;
            prv->data=temp->data;
            prv=prv->prev;
            p=p->next;
        }
    return head;
    }
}
