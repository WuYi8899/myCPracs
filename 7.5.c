//��switch��д��ϰ4��

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("�������ַ�����#������: \n");
    while((ch = getchar()) !='#')
    {
        switch(ch)
        {
            case '.':
            putchar('!');
            a++;
            break;
            case '!':
            putchar('!!');    //�滻!!���ɹ�
            b++;
            break;
            default:
                putchar(ch);

        }
    }
    printf("�滻��'.' %d �� ,�滻��'!' %d �Ρ�\n", a,b);
    return 0;
}
