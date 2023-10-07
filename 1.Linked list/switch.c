#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}


struct Node *insertAtIndex(struct Node *head,int data,int i){
  if(i<0){
    return head;
  }
  if(i==0){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->next=head;
    head=n;
    return head;
  }
  struct Node *copyHead=head;
  int count=1;

  while(count<=i-1 && head!=NULL){
    head=head->next;
    count++;
  }
  if(head){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->next=head->next;
    head->next=n;
    return copyHead;
  }
  return copyHead;
}

struct Node *deleteAtIndex(struct Node *head,int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){
        return head->next;
    }
    struct Node *curr=head;
    int count=1;
    while(count<=i-1 && curr!=NULL){
        curr=curr->next;
        count++;
    }
    if(curr && curr->next){
        curr->next= curr->next->next;
        return head;
    }
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
    if(head){
        printf("%d",head->data);
    }else{
        printf("-1");
    }
}
struct Node *reverse(struct Node *head){
    struct Node *curr,*prev,*next;
    curr=head;
    prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
    }
void concat(struct Node *head1,struct Node *head2){
    struct Node *ptr=NULL;
    ptr=head1;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=head2;
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


    int number=0;
    printf("enter(1 to 5) which number of function you want to call: ");
    scanf("%d",&number);
    switch(number){
        case 1:
        printf("calling the function (insertAtIndex): ");
        int data ,i;
        printf("enter data: ");
        scanf("%d",&data);

        printf("enter index: ");
        scanf("%d",&i);
        head2=insertAtIndex(head2,data,i);
        linkedListTraversal(head2);
        break;

        case 2:
        printf("calling the function (deleteAtIndex): ");
        int j;
          printf("enter index: ");
        scanf("%d",&j);
        head2=deleteAtIndex(head2,j);
        linkedListTraversal(head2);
        break;

        case 3:
        printf("calling the function (printIthNode): ");
        int k;
          printf("enter index: ");
        scanf("%d",&k);
        printIthNode(head2,k);
        break;

        case 4:
         printf("calling the function (reverse): ");
        head2=reverse(head2);
        linkedListTraversal(head2);
        break;

        case 5:
         printf("calling the function (concat): ");
        concat(head1,head2);
        linkedListTraversal(head1);
        break;
    }


    return 0;
}