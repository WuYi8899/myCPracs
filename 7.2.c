//��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���
//һ�д�ӡ8���ַ������飺ʹ���ַ���������ģ�����(%)��ÿ8��ѭ������ʱ��ӡһ�����з���
#include <stdio.h>
int main (void)
{
    char ch;
    const int a=8;
    int b=1;
    printf("�������ַ���# �˳���:");
    while((ch=getchar())!= '#')
    {
        printf("%c\t%d.\n",ch,ch);
        b++;
        if (b%a==0)
        printf("\n");
    }
    printf("\n");
    return 0;
}
