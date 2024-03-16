#include <stdio.h>
#include <malloc.h>                                     
struct link
{
    int info;
    struct link *next;                                                    
};
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
}
int main()
{
    struct link *node;
    node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL)
    printf(" Memory allocation is not done.\n");
    createlist(node);
    display(node);
}