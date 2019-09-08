//输入一个单词读入字符组中，然后倒叙打印

#include <stdio.h>
int main (void)
{

    float a,b;
    double c,d,e;
    printf("please enter the first number:");
    scanf("%f",&a);
    printf("please enter the second number:");
    scanf("%f",&b);
    while (a-b!=0)
    {
        c=(a-b)/(a*b);
        printf("two number input were: %f %f; result = %f\n",a,b,c);
    }

    return 0;
}
