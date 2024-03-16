#include <stdio.h>
#include <stdlib.h>                                     
struct link
{
    int info;
    struct link *next;                                                    
};
struct link *start;
void createlist(struct link*);
void delete(struct link*);
void display(struct link*);

void createlist(struct link *node)
{
    int temp,e=1;
    printf("Ent value of node %d: ",e);
    scanf("%d",&node->info);
    node->next=NULL;
    e++;
    printf("Do you want to continue.?(Type 1 or 0): ");
    scanf("%d",&temp);

    while(temp==1)
    {
        node->next=(struct link*)malloc(sizeof(struct link));
        if(node->next==NULL)
        printf("Memory allocation is not done.\n");
        node=node->next;                                                
        printf("Ent value of node %d: ",e);
        scanf("%d",&node->info);
        node->next=NULL;
        e++;
        printf("Do you want to continue.?(Type 1 or 0): ");                     
        scanf("%d",&temp);
    }
}
void display(struct link *node)
{
    if(node==NULL)
    {
        printf("Empty list.\n");
        return;
    }
    printf("Value of nodes in linkedlist: ");
    while(node!=NULL)
    {
        printf("%d",node->info);
        node=node->next;
    }
    printf("\n");
}
void delete(struct link *node)
{
    struct link *prev;
    if(node->next==NULL)
    {
        free(node);
        start=NULL;
        return;
    }
    while(node->next!=NULL)
    {
        prev=node;
        node=node->next;
    }
    prev->next=NULL;
    free(node);
}
int main()
{
    int ch;
    struct link *node;
    node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL)
    printf("Out of Memory space.\n");
    printf("Delete last node of Single Linked List.\n");
    createlist(node);
    
    while(ch!='3')
    {
        printf("Press 1 for deletelastnode.\n");
        printf("Press 2 for display.\n");
        printf("Press 3 for quit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
            delete(node);
            start=node;
            break;
            case 2:
            display(node);
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Wrong choice.!Try again.\n");
        }
    }
}