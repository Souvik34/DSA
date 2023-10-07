#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next; 
};

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

    void printIthNode(struct Node *head,int i){
    if(i<0){
        printf("-1");
        return;
    }
    int count=1;
    while(count<=i && head!=NULL){
        head=head->next;
        count++;
    }
    if(head)
    {
        printf("%d",head->data);
    }
    else
    {
        printf("-1");
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

void linkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
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
    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth1 = (struct Node *)malloc(sizeof(struct Node));

     struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third2= (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth2 = (struct Node *)malloc(sizeof(struct Node));

    head1->data=7;
    head1->next=second1;

    second1->data=14;
    second1->next=third1;

    third1->data=28;
    third1->next=fourth1;

    fourth1->data=56;
    fourth1->next=NULL;

     head2->data=100;
    head2->next=second2;

    second2->data=200;
    second2->next=third2;

    third2->data=300;
    third2->next=fourth2;

    fourth2->data=400;
    fourth2->next=NULL;


    int n;
    printf("Enter 1 to 5 which number of function you want to call:\n");
    printf("1: Creation\n");
    printf("2: Insertion\n");
    printf("3: Deletion\n");
    printf("4: Print\n");
    printf("5: Reverse\n");
    printf("6: Concatenation\n");

    scanf("%d",&n);
    switch(n)
    {
    case 1:

     printf("Calling the function (insertAtIndex): ");

     int data ,i;
        printf("enter data: ");
        scanf("%d",&data);

        printf("enter index: ");
        scanf("%d",&i);
        head1=insertAtIndex(head1,data,i);
        linkedListTraversal(head1);
        break;

        case 2:
         printf("Calling the function (deleteAtIndex): ");
        int j;
          printf("enter index: ");
        scanf("%d",&j);
        head1=deleteIndex(head1,j);
        linkedListTraversal(head1);
        break;


        case 3:
         printf("Calling the function (printIthNode): ");
        int k;
          printf("enter index: ");
        scanf("%d",&k);
        printIthNode(head1,k);
        break;

         case 4:
         printf("Calling the function (reverse): ");
        head1=reverse(head1);
        linkedListTraversal(head1);
        break;

        case 5:
         printf("Calling the function (concat): ");
        concatenate(head1,head2);
        linkedListTraversal(head1);
        break;


        default:
        printf("Wrong choice");
    }
    
    return 0;
}