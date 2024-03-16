#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void Enqueue();
void Dequeue();
void Display();
int queue[MAX];
int rear = - 1;
int front = - 1;
//insert elements in queue.
void Enqueue()
{
    int data;
    if(rear==MAX-1)
    {
        printf("Queue overflow. ");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("Ent the data of queue: ");
        scanf("%d",&data);
        rear=rear+1;
        queue[rear]=data;
    }
}
//remove elements from queue.
void Dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue underflow. ");
        return;
    }
    else
    {
        printf("Elment deleted from queue is: %d\n",queue[front]);
        front=front+1;
    }
 }
//display elements of queue.
void Display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for Enqueue.\n");
        printf("Press 2 for Dequeue.\n");
        printf("Press 3 for Display.\n");
        printf("Press 4 for exit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
             Enqueue();
             break;
            case 2:
             Dequeue();
             break;
            case 3:
             Display();
             break;
            case 4:
             exit(0);
             break;
            default:
            printf("Entered choice is Wrong. \n");
        }
    }
}