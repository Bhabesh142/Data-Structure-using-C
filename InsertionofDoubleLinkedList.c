// Creation,Insertion & Display of Double Linked List.
#include <stdio.h>                                                            
#include <stdlib.h>                                                      
struct node
{
 int data;
 struct node*next;
 struct node*prev;
} *head,*newnode,*tail;
// code for creation of double linked list.
void createList()
{  
    int choice=1;
    struct node*temp;
    head=NULL;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
// code for insert a node at Beginning
void insertatBeginning()
{
	struct node*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Ent the data to be inserted: ");
	scanf("%d",&newnode->data);
	temp=head;
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->next=temp;
	temp->prev=newnode;
	head=temp=newnode;
}
//code for insertatEnd of doubleLinkedList.
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
//code for insert a node at Position
void insertatPosition()
{
    struct node *temp;
    int pos,i=1;
    printf("Ent the position where u want to insert the data: ");
    scanf("%d",&pos);
    if(pos<1)
    {
        printf("Invalid.");
    }
    else
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Ent the data u want to insert: ");
    scanf("%d",&newnode->data);
    temp=head;
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
    }
}
//code for display of double linked list.
void displayList()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
  int ch; 
  while(ch!='6')
  {   
        printf("Press 1 for createList.\n");
	    printf("press 2 for insertatBeginning.\n");
        printf("Press 3 for insertatEnd.\n");
        printf("Press 4 for insertatPosition.\n");
        printf("Press 5 for displayList.\n");
        printf("Press 6 for exit.\n");
        printf("Enter your choice:"); 	
        scanf("%d",&ch);

        switch(ch)  
        {  
            case 1:
             createList();
             break;   
	        case 2:
	         insertatBeginning();
             break;
            case 3:
             insertatEnd();
             break;
            case 4:
             insertatPosition();
             break;
            case 5:
             printf("Values in double Linked List are: ");
             displayList();
             break;
            case 6:
             exit(0);
             break;
            default:  
             printf("Entered choice is wrong.\n");  
        }
    }
}