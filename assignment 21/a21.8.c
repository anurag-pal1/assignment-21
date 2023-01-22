#include<stdio.h>
struct Student{
char name[20];
int standard;
int num;
};
int main()
{
    struct Student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter %d student name: ",i+1);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
         printf("Enter %d student standard: ",i+1);
         scanf("%d",&s[i].standard);
          printf("Enter %d student mobile number: ",i+1);
          scanf("%d",&s[i].num);
    }
    for(i=0;i<10;i++)
    {
        printf("%d.%sClass:-%d\nMobile No.:-%d\n",i+1,s[i].name,s[i].standard,s[i].num);
    }
    return 0;
}

