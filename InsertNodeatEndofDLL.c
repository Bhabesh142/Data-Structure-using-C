#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node*next;
 struct node*prev; 
}*head,*newnode,*tail;
// code for creation of linked list
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
//code for display of double linked list in forward direction
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
//code for display of double linked list in backward direction
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
//code for insert a node at End
void insertatEnd()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Ent the data to be inserted: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
}
int main()
{
  int ch; 
  while(ch!='5')
  {   
        printf("Press 1 for createList.\n");
        printf("Press 2 for displayForward.\n");
        printf("Press 3 for displayBackward.\n");
	    printf("press 4 for insertatEnd.\n");
        printf("Press 5 for exit.\n");
        printf("Enter your choice:"); 	
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
             printf("List(Last to First): ");
             displayBackward();
             break;
	        case 4:
	         insertatEnd();
             break;
            case 5:
             exit(0);
             break;
            default:  
             printf("Entered choice is wrong.\n");  
        }
    }
}