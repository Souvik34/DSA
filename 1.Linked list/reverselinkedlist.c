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

struct Node *reverse(struct Node *head)
{
    struct Node *current, *prev, *next;

    current = head;
    prev= NULL;
    while(current !=NULL)
    {
        next= current->next;
        current->next=prev;

        prev=current;
        current=next;
    }
    head= prev;
    return head;
}

int main()

{
    struct Node *head= (struct Node*) malloc(sizeof(struct Node));
    struct Node *second= (struct Node*) malloc(sizeof(struct Node));
    struct Node *third= (struct Node*) malloc(sizeof(struct Node));
    struct Node *fourth= (struct Node*) malloc(sizeof(struct Node));

     head->data = 7;
    head-> next = second;

    
    second->data = 10;
    second-> next = third;
    
    third->data = 17;
    third-> next = fourth;
    
    fourth->data = 23;
    fourth-> next = NULL;    

    printf("Linked List before Reverse\n");

    linkedListTraversal(head);

    head= reverse(head);

    printf("\nLinked List After Reverse\n");

    linkedListTraversal(head);


}