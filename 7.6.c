//��д�����ȡ���룬����#ֹͣ������ei���ֵĴ������á�Receive your eieio award�������������ԡ�

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0;
    printf("������һ�λ����ԡ�#������: \n");
    while((ch = getchar()) !='#')
    {
        if(ch=='e')
        {
            a++;
        }

        else if(ch=='i')
           {
            b++;
           }


    }
    printf("e�����ˣ� %d �� ,i�����ˣ� %d �Ρ�\n", a,b);
    return 0;
}
