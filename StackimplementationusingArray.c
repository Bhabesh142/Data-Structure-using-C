#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void push(int);
int pop();
void display();
int stack[MAX];
int top=-1;

void push(int item)
{
    if(top==MAX-1)
    {
        printf("Stack is full.\n");
        return;
    }
    else
    {
        top=top+1;
        printf("Top is %d",top);
        stack[top]=item;
    }
}
int pop()
{
    int item;
    if(top<0)
    {
        printf("Stack underflow.\n");
    }
    else
    {
        item=stack[top];
        top=top-1;
        return item;
    }
}
void display()
{
    int i;
    printf("\n");
    for(i=top;i>=0;i--)
    {
        printf("\t%d|%d|\n",i,stack[i]);
        printf("\t--\n%d",top);
    }
}int main()
{
    int ch,item;
    while(1)
    {
        printf("\n1-PUSH.\n2-POP.\n3-DISPLAY.\n4-EXIT");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                   printf("Ent item to insert in stack: ");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:
                   printf("Deleted item from stack is %d",pop());
                   break;
            case 3:
                   printf("Stack elements: Top element first.");
                   display();
                   break;
            case 4:
                   exit(0);
            default:
                   printf("Wrong choice.");
        }
    }
}