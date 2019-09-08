/*编写一个程序，要求用户输入下限整数和一个上限整数，然后，依次计算从下限到上限的每一个整数的平方的加和
最后显示结果。程序将不断提示用户输入下限整数和上限整数并显示出答案，直到用户输入的上限整数等于或小于下限整数为止。
程序运行的结果示例应该如下所示：
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
