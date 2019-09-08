/* 编写一个程序，用户输入天数，转换成周数和天数 */
#include <stdio.h>
#define MIN_PER_HOU 7
int main (void)
{
    int day,week,left;
    printf("convert seconds to hours and minutes.\n");
    printf("enter the number of day (<=0 to quit):");
    scanf("%d",&day);
    while(day>0)
    {

        week=day / MIN_PER_HOU;
        left=day % MIN_PER_HOU;
        printf("%d days are %d weeks,%d days.\n",day,week,left);
        printf("enter next day (<=0 to quit):\n");
        scanf("%d",&day);
    }
    printf("Done!\n");
    return 0;
}
