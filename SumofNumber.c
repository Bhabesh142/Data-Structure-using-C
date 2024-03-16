#include <stdio.h>
void main()
{
    int i, a=0;
    printf("Ent a number: ");
    scanf("%d",&i);

    while(i!=0)
    {
        a=i%10+a;
        i=i/10;
    }
    printf("Sum of number is: %d",a);
}