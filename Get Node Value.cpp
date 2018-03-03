/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int n=0;
  while(head!=NULL)
  {    
      Node* p=head;

      for(int i=n;i<positionFromTail;i++)
      {
          p=p->next;
      }
   if(p->next==NULL)break;
       
      head=head->next;
  }
    return head->data;
}
