#include <stdio.h>
void main()
{
    int a[10], i,srchng=0,count=0;
    printf("Ent 10 no.of elements in an array: ");
    for(i=0; i<10; i++)  
    {  
        scanf("%d", & a[i]);  
    }

    printf("Ent the value to search: ");
    scanf("%d",&srchng);

    for(i=0;i<10;i++)
    {
        if(srchng == a[i])
        count++;
    }
    printf("No.of occurence of num: %d\t",count);
}