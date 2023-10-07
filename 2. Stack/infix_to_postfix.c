#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*front=NULL,*rear=NULL;

//insertion
void enqueue(int x)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->link=NULL;
    //it is the first node
    {
        if(front==NULL && rear==NULL)
        //make both front and rear point to the newnode
        front=rear=newNode;
        else{
            //add newnode in rear->link
            rear->link=newNode;
            //make the rear node as the newnode
            rear=newNode;
        }
    }
}
//deletion
void dequeue()
{
    struct node *temp;
    if(front == NULL)
    printf("queue is empty\n");
    else
    {
        temp=front;
        printf("Deleted data: %d\n",temp->data);
        front=front->link;
        if(front==NULL)
        rear=NULL;
        free(temp);
        temp = NULL;
    }
}
void printlist()
{
    struct node *temp=front;
    while(temp){
        printf("%d ", temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Print the queue\n");
        printf("4.quit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        switch(choice)
        {
            case 1:
            printf("enter the element to be inserted: ");
            scanf("%d",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            printlist();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}