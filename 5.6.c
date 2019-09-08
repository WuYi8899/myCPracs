//计算工作天数应该多少得钱，第1天1元 第2天4元.....平方和
#include <stdio.h>
int main (void)
{
    long int b;
    int a;
    printf("enter next days (<=0 to quit):");
    scanf("%d",&a);
    while(++a<=20)
    {
        b=a*(a+1)*(2*a+1)/6;
        printf("working for %d days the salary is %d dollars .\n",a,b);
        printf("enter next days (<=0 to quit):\n");
        scanf("%d",&a);
    }
    printf("Done!\n");
    return 0;
}
