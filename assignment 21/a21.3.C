#include<stdio.h>
struct Employee{
     char name[20];
     int id;
     int salary;
};
int main()
{
    struct Employee e;
    printf("Enter user name:\n");
    fflush(stdin);
    fgets(e.name,20,stdin);
    printf("Enter user id:\n");
    scanf("%d",&e.id);
    printf("Enter user salary:\n");
    scanf("%d",&e.salary);
    printf("Name:-%sId:-%d\nSalary:-%d",e.name,e.id,e.salary);
    return 0;
}

