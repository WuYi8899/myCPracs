//编写一个程序，读取整数，直到用户输入0。输入结束后，程序应该报告输入的偶数（不包括0）个数、
//这些偶数的平均值，输入的奇数个数以及奇数的平均值。

#include <stdio.h>
int main (void)
{

    int a,b,c;               //b偶数个数 c奇数个数
    double d,e;              //平均数
    int amax,amix;           //相加
    printf("请输入整数,");
    printf("输入0退出:");
    while(scanf("%d",&a)==1 && a!=0)
    {
        if (a%2==0)     //偶数
         {
            b++;
            amax+=a;
         }
        else            //奇数
        {
            c++;
            amix+=a;
        }
        printf("偶数的个数为:%d   奇数的个数为:%d\n",b,c);
    }
    if (b>0)
    {
        d=amax/b;
        printf("偶数平均数值为:%.2f\n",d);
    }
    if (c>0)
    {
        e=amix/c;
        printf("奇数平均数值为:%.2f\n",e);
    }


    return 0;

}
