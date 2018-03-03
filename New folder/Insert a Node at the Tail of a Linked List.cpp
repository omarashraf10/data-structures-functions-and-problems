/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  Node* p=head;
    if(head==NULL)
    {
        head=new Node;
        head->data=data;
        head->next=NULL;
    }
    else
    {
    while(p->next!=NULL)
    {
        p=p->next;      
    }
    p->next=new Node;
    p->next->data=data;
    p->next->next=NULL;
    
    }
return head;
}
