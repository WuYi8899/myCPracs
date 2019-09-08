//输入第一个整数座位求模运算符的第二个运算对象，概述在运算中保持不变。用户后边输入的数是第一个运算对象，非正结束
#include <stdio.h>
void pound (double n);
int main (void)
{
    int a,b,c;
    printf("this program computse moduli.\n");
    printf("enter an integer to serve as the second operand:");
    scanf("%d",&a);
    printf("now enter the first operand:");
    scanf("%d",&b);
    while(a>0)
    {
        c=b%a;
        printf("%d %% %d is %d\n",b,a,c);
        printf("enter the first operand(0<= to quit):");
        scanf("%d",&b);
    }

    return 0;
}
