/* ���㹤������Ӧ�ö��ٵ�Ǯ����1��1Ԫ ��2��2Ԫ..... */
#include <stdio.h>
int main (void)
{
    int a,b;
    printf("enter next days (<=0 to quit):");
    scanf("%d",&a);
    while(++a<=20)
    {
        b=(a+1)*a/2;
        printf("working for %d days the salary is %d dollars .\n",a,b);
        printf("enter next days (<=0 to quit):\n");
        scanf("%d",&a);
    }
    printf("Done!\n");
    return 0;
}
