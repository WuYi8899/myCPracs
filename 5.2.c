/* ��дһ�������û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10���������� */
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
