/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  if(!headA&&!headB)
      return NULL;
    else if(headA&&!headB)
        return headA;
    else if(!headA&&headB)
        return headB;
 
    else
    {
        Node* p=new Node;
         
        if((headA->data)<=(headB->data))
        {
            p=headA;
            headA=headA->next;
        }
        else
        {
            p=headB;
            headB=headB->next;
        }
       
        Node* pr=p; 
        while(headA&&headB)
        {
               if((headA->data)<=(headB->data))
                   {
                   p->next=headA;
                   headA=headA->next;
                   }
               else
                   {
                    p->next=headB;
                    headB=headB->next;
                   }
         p=p->next;   
        }
        
        if(headA&&!headB)
        {
            p->next=headA;
        }
        else if(!headA&&headB)
        {
            p->next=headB;
        }
          
 return pr;
         

  }

}
