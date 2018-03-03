/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
        else
    {
            Node* p=head;
            int size=1;
            while(p->next!=NULL)
            {
                size++;
                p=p->next;
            }
            Node* pr=new Node;
            pr->data=head->data;
            pr->next=NULL;
                for(int i=1;i<size;i++)
            {
                head=head->next;
                Node* q=new Node;
                q->data=head->data;
                q->next=pr;
                    pr=q;
                    
       
            }
                    
            return pr;
    }
}
