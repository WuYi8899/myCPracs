//��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�ո��������з���Ŀ�Լ����е������ַ���Ŀ��

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("�������ַ�����#������: \n");
    while((ch = getchar()) !='#')
    {
        if(ch==' ')
            a++;
        else if(ch=='\n')
            b++;
        else
            c++;
    }
    printf("�ո�:%d, ���з���:%d, ����:%d\n", a,b,c);
    return 0;
}
