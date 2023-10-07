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

struct Node *deleteIndex(struct Node *head, int index)
{
    struct Node *ptr=head;
    struct Node *q=head->next;

    int i=0;
    while(i!=index-1)
    {

    ptr= ptr->next;
    q= q->next;
   i++;
}

    ptr->next= q->next;
    free(q);
    return head;
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
    printf("Linked List Before deletion\n");
    linkedListTraversal(head);

    head= deleteIndex(head,2);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    
    return 0;
}