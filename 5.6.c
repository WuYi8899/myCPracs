//���㹤������Ӧ�ö��ٵ�Ǯ����1��1Ԫ ��2��4Ԫ.....ƽ����
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
