#include <stdio.h>
void main()
{
    int i, j, a[10],temp;
    printf("Ent 10 elements of array: ");

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        if(a[i]<a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("Sorting array in ascending order: ");

    for(i=0;i<10;i++)
    printf("%d\t",a[i]);

    printf("\nSorting array in descending order: ");

    for(i=9;i>=0;i--)
    printf("%d\t",a[i]);
}