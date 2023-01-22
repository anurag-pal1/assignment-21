#include<stdio.h>
struct Student{
char name[20];
int roll_num;
int phy_marks;
int chem_marks;
int maths_marks;
};
int main()
{
    struct Student s[5];
    int i;
    float result[5]={0};
    for(i=0;i<5;i++)
    {
        printf("Enter %d student name: ",i+1);
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        printf("Enter %d student roll number: ",i+1);
        scanf("%d",&s[i].roll_num);
        printf("Enter %d student physics marks: ",i+1);
        scanf("%d",&s[i].phy_marks);
        printf("Enter %d student chemistry marks: ",i+1);
        scanf("%d",&s[i].chem_marks);
        printf("Enter %d student maths marks: ",i+1);
        scanf("%d",&s[i].maths_marks);
    }
    for(i=0;i<5;i++)
    {
        result[i]=(result[i]+s[i].phy_marks+s[i].chem_marks+s[i].maths_marks)/3;
    }
    for(i=0;i<5;i++)
    {
        printf("Name:%sRoll number:%d\nPercentage:%f\n",s[i].name,s[i].roll_num,result[i]);
    }
    return 0;
}
