#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int queue[MAX];
int front=-1;  
int rear=-1;  

void Enqueue(int data)  
{  
    if(front==-1 && rear==-1)
    {  
        front=0,rear=0;  
        queue[rear]=data;  
    }  
    else if((rear+1)%MAX==front)
    {  
        printf("Queue overflow.\n");  
    }  
    else  
    {  
        rear=(rear+1)%MAX;      
        queue[rear]=data;
    }  
}  
void Dequeue()  
{  
    if((front==-1) && (rear==-1)) 
    {  
        printf("Queue underflow.\n");  
    }  
    else if(front==rear)
    {
     printf("Dequeued element is: %d", queue[front]);
     front=-1,rear=-1;
    }
    else
    {
        printf("Dequeued element is: %d", queue[front]);  
        front=(front+1)%MAX;
    }  
}   
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("Queue is empty.");  
    }  
    else  
    {  
        printf("Elements in queue are:");  
        while(i<=rear)  
        {  
            printf("%d",queue[i]);  
            i=(i+1)%MAX;  
        }  
    }  
}  
int main()  
{  
    int data,choice=1;
    while(choice!='4')
    {
        printf("Press 1 for insertelement.\n");
        printf("Press 2 for deleteanelement.\n");
        printf("Press 3 for displaytheelement.\n");
        printf("Press 4 for exit.\n");
        printf("Ent your choice: ");  
        scanf("%d",&choice);
      
    switch(choice)  
    {  
        case 1:  
         printf("Ent the element to be inserted: ");  
         scanf("%d", &data);  
         Enqueue(data);  
         break;  
        case 2:  
         Dequeue();  
         break;  
        case 3:  
         display();
         break;
        case 4:
         exit(0);
         break;
        default:
         printf("Entered choice is wrong. ");
    }
  }
}