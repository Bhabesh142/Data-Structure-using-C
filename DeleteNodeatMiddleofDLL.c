#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node*next;
  struct node*prev;
}*head,*newnode,*tail;

void createList()
{  
    int choice=1;
    struct node*temp;
    head=NULL;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node*));
        printf("Ent the item: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=tail=newnode;
        }
        printf("Do you want to continue.?(Type 1 or 0): ");
        scanf("%d",&choice);
    }
}
void displayForward()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void displayBackward()
{
    struct node*temp;
    temp=tail;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->prev;
    }
}
//code for delete a node at any possition
void deleteatPosition()
{   

    struct node*temp;
    temp=head;
    int ps,i=1;
 printf("Ent the position u want to delete: ");
 scanf("%d",&ps);
 while (i<ps)
 {
    temp=temp->next;
    i++;
 }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
int main()
{
    int ch;  
    while(ch!='5')
    {
        printf("Press 1 for createList.\n");
        printf("Press 2 for displayForward.\n");
        printf("Press 3 for displayBackward.\n");
        printf("Press 4 for deleteatPosition.\n");
        printf("Press 5 for exit.\n");
        printf("Enter your choice: ");  
        scanf("%d",&ch);

        switch(ch)  
        {  
            case 1:
            createList();
            break;   
            case 2:
            printf("List(First to Last): ");  
            displayForward();  
            break;   
            case 3:
            printf("List(Last to first): "); 
            displayBackward();
            break;
            case 4:
             deleteatPosition();
             break;
            case 5:
             exit(0);
             break;
            default:  
             printf("Entered choice is wrong.\n");
        }
    }
}