#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void linkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
    }
    
}

 struct Node *inserAtFirst( struct Node *head, int data)
 {
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr-> data= data;
    return ptr;
 }
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linked list and second nodes

    head->data = 7;
    head-> next = second;

    
    second->data = 10;
    second-> next = third;
    
    third->data = 17;
    third-> next = fourth;
    
    fourth->data = 23;
    fourth-> next = NULL;    

    linkedListTraversal(head);

  head = inserAtFirst(head, 56);
    linkdListTraversal(head);

    

    return 0;
}