#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

void push(int data)
{
    if(top==MAX-1)
    {
        printf("stack is overflow");
    }
    top++;
    stack_arr[top]=data;

}

int pop()
{
    int value;
    if(top==-1)
    {
        printf("stack is underflow");
    }

    value=stack_arr[top];
    return value;
    top--;
}

void print()
{
    int i;
    if(top==-1)
    {
        printf("stack is underflow\n");
    }
    for(i=top;i>=0;i--)
    printf("%d\n",stack_arr[i]);

}

void check()
{
    if (top==-1)
    {
        printf("stack is empty\n");
    }
    else{
        printf("stack has element\n");
    }

}

int main()
{
    int choise ,data;
    while(1)
    {
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DIAPLAY\n");
    printf("4.CHECK\n");
    printf("5.EXIT\n");
    printf("enter your choise:");

    scanf("%d",&choise);
        switch(choise)
        {
        case 1:
            printf("enter the element you want to be pushed:");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            data=pop();
            printf("poped element is %d\n",data);
            break;

        case 3: 
            print();
            break;

        case 4:
            check();
            break;
        case 5:
            exit(1);
        }
    }
    return 0;


}