//��ӡһ�����ÿ�д�ӡһ������������ƽ������������

#include <stdio.h>
int main (void)
{
    int i,b,a;
    int squ,cub;
    printf("enter a number for the max:");
    scanf("%d",&b);
    printf("now enter the mix :");
    scanf("%d",&a);

    printf("number     square     cube\n");
    for(a=a;a<=b;a++)
    {
        squ=a*a;
        cub=a*a*a;

        printf("%3d %10d %9d \n",a,squ,cub);
    }

    return 0;
}
