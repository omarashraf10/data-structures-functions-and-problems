/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    if(head==NULL)  //case of empty list
    {
        Node* p=new Node;
        p->data=data;
        p->next=NULL;
        p->prev=NULL;
        head=p;
        return head;
    }
    if(data<(head->data))  //case of insertion in the beginning
    {
        Node* p=new Node;
        p->data=data;
        p->next=head;
        p->prev=NULL;
        head=p;
        return head;
    }
    else //case of insertion in the middle
    {
        Node* p=head;
        while(p->next)
        {
           if((p->next->data)>data)  //in the middle
           {
               Node* pr=new Node;
               pr->data=data;
               pr->next=p->next;
               p->next->prev=pr;
               p->next=pr;
               pr->prev=p;
               break;
           }
            p=p->next;
        }
        if(!p->next)//in the end
        {
            Node* pr=new Node;
            pr->data=data;
            pr->next=NULL;
            p->next=pr;
            pr->prev=p;
        }
       return head; 
    }
}
