/*��дһ������Ҫ���û���������������һ������������Ȼ�����μ�������޵����޵�ÿһ��������ƽ���ļӺ�
�����ʾ��������򽫲�����ʾ�û���������������������������ʾ���𰸣�ֱ���û�����������������ڻ�С����������Ϊֹ��
�������еĽ��ʾ��Ӧ��������ʾ��
Enter lower and upper integer limits: 5 9
Enter next set of limits:3 25
The sums of the squares from 9 t0 625 iS 5520
Done    */

#include <stdio.h>
int main (void)
{
    int lower,upper,a;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while(lower < upper)
    {
        int b;

        for(a=lower;a<=upper;a++)
        printf("The sums of the squares from %d to %d is %d \n", lower*lower, upper*upper,b);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");
    return 0;
}
