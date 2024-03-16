// Deletion of Double Linked List.
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node*next;
  struct node*prev;
}*head,*newnode,*tail;
// code for creation of linked list.
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
//code for deletionatBeginning of double linked list.
void deleteatBeginning()
{
    struct node*temp;
    if (head==NULL)
    {
        printf("List is empty. ");
    }
    else
    {
    temp=head;
    head=temp->next;
    head->prev=NULL;
    temp->next=NULL;
    free(temp);
    } 
}
//code for delete a node at last
void deleteatEnd()
{
    struct node*temp;
    if (tail==NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        free(temp);
    } 
}
//code for delete a node at any possition
void deleteatPosition()
{   
    struct node*temp;
    temp=head;
    int ps,i=1;
    printf("Enter the position u want to delete: ");
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
// code to display the double linked list.
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
        printf("Press 2 for deleteatBeginning.\n");
        printf("Press 3 for deleteatEnd.\n");
        printf("Press 4 for deleteatPosition.\n");
        printf("Press 5 for displayList.\n");
        printf("Press 6 for exit.\n");
        printf("Enter your choice: ");  
        scanf("%d",&ch);

        switch(ch)  
        {  
            case 1:
             createList();
             break;      
            case 2:
             deleteatBeginning();
             break;
            case 3:
             deleteatEnd();
             break;
            case 4:
             deleteatPosition();
             break;
            case 5:
             printf("Values in the double Linked List are: ");  
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