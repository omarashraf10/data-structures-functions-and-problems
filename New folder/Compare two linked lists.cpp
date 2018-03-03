/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  int same=1;
    while(headA!=NULL&&headB!=NULL)
    {
        if(headA->data!=headB->data)
        {
            same=0;
            break;
        }
        headA=headA->next;
        headB=headB->next;
    }
    if(headA==NULL&&headB==NULL)
    {
        return same;
    }
    else if(headA==NULL||headB==NULL)
    {
        return 0;
    }
    return same;
}
