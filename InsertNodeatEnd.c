#include <stdio.h>
#include <stdlib.h>                                     
struct link
{
    int info;
    struct link *next;                                                    
};
void insertnode(struct link*);
void createlist(struct link*);
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
    printf("Value in linkedlist: ");
    while(node!=NULL)
    {
        printf("%d",node->info);
        node=node->next;
    }
    printf("\n");
}
void insertnode(struct link *node)
{
    struct link *curr;
    while(node->next!=NULL)
    node=node->next;
    curr=(struct link*)malloc(sizeof(struct link));
    if(curr==NULL)
    printf("Memory allocation is not done.");
    curr->next=NULL;
    node->next=curr;
    printf("Ent value for current node: ");
    scanf("%d",&curr->info);
}
int main()
{
    int ch;
    struct link *node;
    node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL)
    printf("Memory allocation is not done.\n");
    printf("Insert node at end of Single Linked List.\n");
    createlist(node);
    
    while(ch!='3')
    {
        printf("Press 1 for insertnode.\n");
        printf("Press 2 for display.\n");
        printf("Press 3 for quit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            insertnode(node);
            break;
            case 2:
            display(node);
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Entered choice is incorrect.\n");
        }
    }
}