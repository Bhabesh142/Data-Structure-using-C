#include <stdio.h>
#include <malloc.h>       
struct student
{
    int roll_no;
    char name[20];
    int age;
} s[5];
void main()
{
    int i;
    printf("Enter 5 dif. details of student: ");

    for(i=0;i<5;i++)
    scanf("%d %s %d",&s[i].roll_no, s[i].name, s[i].age);

    for(i=0;i<5;i++)
    scanf("%d %s %d",&s[i].roll_no, s[i].name, s[i].age);
}