/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    int n=0;
if(head->next==NULL&&position==0)
{    
    Node* pr=head;
     head=NULL;
    delete pr;
    return head;
}
    else if(head->next!=NULL&&position==0)
    {
    Node* pr=head;
    head=head->next;
    delete pr;
    return head;
        }
    else
    {
        Node* p=head; //pointer to current node
        Node*q ;     //pointer to next node
        while(n!=position&&p!=NULL)
        {
            q=p;
            p=p->next;
            n++;
        }
        Node* pr=p->next;
        q->next=pr;
        delete p;
        return head;
    }
}
