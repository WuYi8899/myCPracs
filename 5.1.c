/* ��дһ�������÷��ӱ�ʾ��ʱ��ת����Сʱ�ͷ��ӱ�ʾʱ�䡣ʹ��#�ķ�in������崴��һ����ʾ60�ķ��ų�����const����ͨ��whileѭ�����û��ظ�
   ����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ�� */
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
