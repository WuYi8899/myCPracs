/* 编写一个程序，用户输入身高厘米，并分别用厘米和英寸位单位显示该值，允许有小数部分 */
#include <stdio.h>
int main (void)
{
    float cm,he,in;
    float inch= cm/2.45;
    printf("enter a height in centimeters (<=0 to quit):");
    scanf("%.1f",&cm);
    while(cm>0)
    {
        he=inch/12;
        in=inch%he;
        printf("%.1f cm=%d feet,%.1f inches.\n",cm,he,in);
        printf("enter a height in centimeters(<=0 to quit):");
        scanf("%f",&cm);
    }
    printf("Bye!\n");
    return 0;
}
