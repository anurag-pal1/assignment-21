#include<stdio.h>
struct Time{
int hour;
int minute;
int second;
};
int main()
{
    struct Time t[2];
    int i,r1,r2,r3;
    for(i=0;i<2;i++)
    {
        printf("Enter hour of %dth time period: ",i+1);
        scanf("%d",&t[i].hour);
        printf("Enter minute of %dth time period: ",i+1);
        scanf("%d",&t[i].minute);
        printf("Enter second of %dth time period: ",i+1);
        scanf("%d",&t[i].second);
    }
    r1=t[0].hour-t[1].hour;
    r2=t[0].minute-t[1].minute;
    r3=t[0].second-t[1].second;
    printf("\nDifference between two time period:-\n");
    printf("%d hours %d minutes %d seconds",r1,r2,r3);
    return 0;
}
