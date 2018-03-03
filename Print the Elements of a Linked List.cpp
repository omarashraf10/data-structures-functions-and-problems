/*
  Print elements of a linked list on console 
 head pointer input could be NULL as well for empty list
 Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node* p=head;
  if(p!=NULL)
  {
      do{
         cout<<p->data<<endl; 
          p=p->next;
          
      }while(p!=NULL);
      
  }
}
