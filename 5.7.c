//����double���͵�������ӡ����ֵ����main��������
#include <stdio.h>
void pound (double n);
int main (void)
{
    double a,b;

    printf("enter the number:");
    scanf("%Lf",&a);
    b=a*a*a;
    printf("the cube of this number is :%f\n",b);
    return 0;
}
    void pound (double n)
    {
        double a,b;
        pound(a);
        pound(b);

        return pound;
}
