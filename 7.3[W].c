//��дһ�����򣬶�ȡ������ֱ���û�����0����������󣬳���Ӧ�ñ��������ż����������0��������
//��Щż����ƽ��ֵ����������������Լ�������ƽ��ֵ��

#include <stdio.h>
int main (void)
{

    int a,b,c;               //bż������ c��������
    double d,e;              //ƽ����
    int amax,amix;           //���
    printf("����������,");
    printf("����0�˳�:");
    while(scanf("%d",&a)==1 && a!=0)
    {
        if (a%2==0)     //ż��
         {
            b++;
            amax+=a;
         }
        else            //����
        {
            c++;
            amix+=a;
        }
        printf("ż���ĸ���Ϊ:%d   �����ĸ���Ϊ:%d\n",b,c);
    }
    if (b>0)
    {
        d=amax/b;
        printf("ż��ƽ����ֵΪ:%.2f\n",d);
    }
    if (c>0)
    {
        e=amix/c;
        printf("����ƽ����ֵΪ:%.2f\n",e);
    }


    return 0;

}
