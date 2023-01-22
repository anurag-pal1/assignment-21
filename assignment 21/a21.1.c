#include<stdio.h>
struct Employee{
   int id;
   char name[20];
   int salary;
};
int main()
{
    struct Employee e={.name="Anurag",.id=220231011,.salary=100000};
    printf("Name=%s\nId=%d\nSalary=%d",e.name,e.id,e.salary);
    return 0;
}
