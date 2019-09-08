/* 编写一个程序，用户输入一个整数，然后打印从该数到比该数大10的所有整数 */
#include <stdio.h>
#define MIN_PER_HOU 60
int main (void)
{
    int a,b;
    b=a+10;
    printf("enter the number:");
    scanf("%d",&a);
    while(b>=++a)
    {
        printf(" %3d ",a);
    }

    return 0;
}
