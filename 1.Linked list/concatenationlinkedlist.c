#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


void linkedListTraversal(struct Node *ptr)
{
   

    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }
}




void concatenate(struct Node *head1, struct Node *head2)
{
    struct Node *ptr= NULL;
    ptr= head1;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next= head2;
}
int main()
{
    struct Node* head1= (struct Node*) malloc(sizeof(struct Node));
    struct Node* second= (struct Node*) malloc(sizeof(struct Node));
    struct Node* third=  (struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*) malloc(sizeof(struct Node));
    struct Node* head2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    struct Node* q = (struct Node*) malloc(sizeof(struct Node));
    struct Node* r = (struct Node*) malloc(sizeof(struct Node));

    head1-> data= 10;
    head1-> next= second;
    
    second-> data= 12;
    second-> next= third;
    
    third-> data= 15;
    third-> next= fourth;
    
    fourth-> data= 20;
    fourth-> next= NULL;

    head2->data = 45;
    head2->next = p;

    p->data = 50;
    p->next = q;
    
    q->data = 55;
    q->next = r;

    r->data = 60;
    r->next = NULL;


    printf("\nLinked List 1\n");
    linkedListTraversal(head1);

    printf("\nLinked List 2\n");
    linkedListTraversal(head2);

    printf("\nLinked List after Concatenation\n");
    concatenate(head1, head2);

    linkedListTraversal(head1);
    
    return 0;
    

}