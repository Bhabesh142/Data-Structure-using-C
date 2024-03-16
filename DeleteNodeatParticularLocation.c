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
int count(struct link*);

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
    int loc,c=0,e=1;
    struct link * prev;
    printf("Ent location at which node to be deleted: ");
    scanf("%d",&loc);
    c=count(node);
    if(loc>c)
    {
        printf("Entrd location exceeds no.of nodes.");
        return;
    }
    while(e<loc)
    {
        prev=node;
        node=node->next;
        e++;
    }
    if(loc==1)
    start=node->next;
    else
    prev->next=node->next;
    free(node);
}
int count(struct link *node)
{
    int e=0;
    while(node!=NULL)
    {
        e++;
        node=node->next;
    }
    return e;
}
int main()
{
    int ch;
    struct link *node;
    node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL)
    printf("Memory allocation is not done.\n");
    start=node;
    printf("Delete node at particular location of Single Linked List.\n");
    createlist(node);
    
    while(ch!='3')
    {
        printf("Press 1 for delete node at particular location.\n");
        printf("Press 2 for display.\n");
        printf("Press 3 for quit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            delete(node);
            node=start;
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