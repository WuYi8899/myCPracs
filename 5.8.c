//�����һ��������λ��ģ������ĵڶ���������󣬸����������б��ֲ��䡣�û������������ǵ�һ��������󣬷�������
#include <stdio.h>
void pound (double n);
int main (void)
{
    int a,b,c;
    printf("this program computse moduli.\n");
    printf("enter an integer to serve as the second operand:");
    scanf("%d",&a);
    printf("now enter the first operand:");
    scanf("%d",&b);
    while(a>0)
    {
        c=b%a;
        printf("%d %% %d is %d\n",b,a,c);
        printf("enter the first operand(0<= to quit):");
        scanf("%d",&b);
    }

    return 0;
}
