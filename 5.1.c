/* 编写一个程序，用分钟表示的时间转换成小时和分钟表示时间。使用#的发in或从身体创建一个表示60的符号常量或const变量通过while循环让用户重复
   输入值，直到用户输入小于或等于0的值才停止循环 */
#include <stdio.h>
#define MIN_PER_HOU 60
int main (void)
{
    int minute,hour,left;
    printf("convert seconds to hours and minutes.\n");
    printf("enter the number of minutes (<=0 to quit):");
    scanf("%d",&minute);
    while(minute>0)
    {

        hour=minute / MIN_PER_HOU;
        left=minute % MIN_PER_HOU;
        printf("%d minute is %d hours,%d minute.\n",minute,hour,left);
        printf("enter next minutes (<=0 to quit):\n");
        scanf("%d",&minute);
    }
    printf("Done!\n");
    return 0;
}
