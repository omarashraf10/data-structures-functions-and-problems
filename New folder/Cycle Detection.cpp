/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    bool cyc=1;
    for(int i=0;i<=100;i++)
    {
        if(head==NULL)
        {
            cyc=0;
            break;
        }
        head=head->next;
   }
    return cyc;
}
