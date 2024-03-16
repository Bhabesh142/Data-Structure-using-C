#include <stdio.h>
void main()
{
    int a[10], i;
    printf("Ent 10 no.of elements in an array: ");
    for(i=0; i<10; i++)  
    {  
        scanf("%d", & a[i]);  
    }

    printf("Display array elements from beging: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nDisplay array elements from ending: ");
    for(i=9;i>=0;i--)
    {
        printf("%d \t", a[i]);
    }
}