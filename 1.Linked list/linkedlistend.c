#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


 struct Node *insertAtEnd(struct Node *head,   int data)
 {
    struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));

    ptr-> data=data;
    struct Node *p= head;

    while(p->next!=NULL)
    {
        p= p->next;
    }

    p->next= ptr;
    ptr->next =NULL;
    return head;

 }

 


 void linkedlistTraversal(struct Node *ptr)
 {
    while(ptr!=NULL)
    {
         printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
    }
 }
int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 17;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    linkedlistTraversal(head);
    head= insertAtEnd(head,66);
    linkedlistTraversal(head);
    return 0;
}
