/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  int n=0;
        if (head==NULL&&position==0)
  {
      head=new Node;
      head->data=data;
      head->next=NULL;
  }
    else if(head!=NULL&&position==0)
    {
      Node* pr=new Node;
      pr->data=data;
      pr->next=head;
        head=pr;
    }
    else
    {
        Node* p=head;//pointer to current node
        Node* q;    //pointer to previous node
        while(n!=position&&p->next!=NULL)
        {
            q=p;
            p=p->next;
            n++;
        }
       
            Node* pr=new Node;
      pr->data=data;
    q->next=pr;
      pr->next=p;
        
        
    }
    
    return head;
}
