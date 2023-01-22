#include<stdio.h>
#include<string.h>
struct Employee{
char name[20];
int id;
int salary;
};
int main()
{
    struct Employee e[10];
    int i,j,temp,temp2;
    char t[20];
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
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<11;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i].salary;
                e[i].salary=e[j].salary;
                e[j].salary=temp;

                 strcpy(t,e[i].name);
                 strcpy(e[i].name,e[j].name);
                 strcpy(e[j].name,t);

                 temp2=e[i].id;
                e[i].id=e[j].id;
                e[j].id=temp2;

            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("Name:-%sId:-%d\nSalary:-%d\n",e[i].name,e[i].id,e[i].salary);
    }
    return 0;
}
