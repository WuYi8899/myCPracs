//ʹ��if else����дһ�������ȡ���룬����#ֹͣ���ø�̾�Ŵ����ţ���������̾�Ŵ���ԭ���ĸ�̾�ţ�
//��󱨸�����˶��ٴ������

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("�������ַ�����#������: \n");
    while((ch = getchar()) !='#')
    {
        if(ch=='.')
        {
            putchar('!');
            a++;
        }

        else if(ch=='!')
           {
            putchar('!!');    //�滻!!���ɹ�
            b++;
           }
        else
        {
             putchar(ch);
        }

    }
    printf("�滻��'.' %d �� ,�滻��'!' %d �Ρ�\n", a,b);
    return 0;
}
