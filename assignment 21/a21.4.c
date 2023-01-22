#include<stdio.h>
struct Employee{
char name[20];
int id;
int salary;
};
int main()
{
    struct Employee e[10];
    int i,max,flag=0,temp;
    for(i=0;i<10;i++)
    {
        printf("Enter %d user name:\n",i+1);
        fflush(stdin);
        fgets(e[i].name,20,stdin);
        printf("Enter %d user id:\n",i+1);
        scanf("%d",&e[i].id);
        printf("Enter %d salary:\n",i+1);
        scanf("%d",&e[i].salary);
    }
    max=e[0].salary;
    for(i=1;i<10;i++)
    {
        temp=max;
        if(max<e[i].salary)
            max=e[i].salary;
            if(temp !=max)
            flag=i;
    }
    printf("Highest salary Employee is %s\nSalary is %d\nId is %d",e[flag].name,max,e[flag].id);
    return 0;
}

