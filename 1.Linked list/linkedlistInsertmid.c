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

    struct Node *insertAtIndex(struct Node *head ,int data, int index )

    {
        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
        struct Node *p = head;
        int i=0;


        while(i!=index-1)
        {
            p=p->next;
            i++;
        }

        ptr->data=data;
        ptr->next= p->next;
        p->next= ptr;
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

    linkedListTraversal(head);
    head= insertAtIndex(head, 56,1);
    linkedListTraversal(head);
    return 0;
}