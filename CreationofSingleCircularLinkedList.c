//Creation & Display of Single Circular linked list.
#include <stdio.h>
#include <stdlib.h>                      
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
//creation of single circular linked list.
void createList()
{
    int data;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Ent the data item: ");
    scanf("%d",&data);
    newnode->data=data;

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        newnode->next=head;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}
//display elements of single circular linked list.
void display()
{
    struct node *current=head;
    if(head==NULL)
    {
        printf("List is empty.");
    }
    else
    {
        printf("Values in single circular linked list are: ");
        do
        {
            printf("%d",current->data);
            current=current->next;
        }       
        while(current!=head);
        printf("\n");
    }
}
int main()
{
  int ch;  
    while(ch!='3')
    {
        printf("Press 1 for createList.\n");
        printf("Press 2 for display.\n");
        printf("Press 3 for exit.\n");
        printf("Enter your choice: ");  
        scanf("%d",&ch);

        switch(ch)  
        {  
            case 1:
             createList();
             break;   
            case 2:
             display();
             break;
            case 3:
             exit(0);
             break;
            default:  
             printf("Entered choice is wrong.\n");
        }
    }
}