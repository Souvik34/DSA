#include<stdio.h>
#include<stdlib.h>
#define MAX 4


int stack_arr[MAX];

int top =-1;

int pop()
{
    int value;
    value = stack_arr[top];
    return value;
    top--;
}

void print()
{
    int i;
    if(top==-1)
    {
        printf("Stack is Underflow\n");

    }
    for(i=top;i>=0;i--)
    printf("%d\n", stack_arr[i]);
}

void check()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }

    else
    {
        printf("Stack has element\n");
    }
}
int main()
{

    int choice, data;

    while(1)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. CHECK\n");
        printf("5. EXIT\n");
        printf("Enter your choice");

        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter the element you want to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;

            case 2:
            data= pop();
            printf("Popped element is %d\n", data);
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
