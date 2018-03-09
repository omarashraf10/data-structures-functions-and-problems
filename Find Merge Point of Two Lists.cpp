/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
#include <vector>
int FindMergeNode(Node *headA, Node *headB)
{
    vector <int> v1,v2;
          while(headA)
          {
              v1.push_back(headA->data);
              headA=headA->next;
          }
            while(headB)
          {
              v2.push_back(headB->data);
              headB=headB->next;
          }
    int i=v1.size()-1,j=v2.size()-1;
     while(v1[i]==v2[j])
     {
         i--;
         j--;
     }
    
    return v1[i+1];
}
