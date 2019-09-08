//编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
//一行打印8个字符。建议：使用字符计数和求模运算符(%)在每8个循环周期时打印一个换行符。
#include <stdio.h>
int main (void)
{
    char ch;
    const int a=8;
    int b=1;
    printf("请输入字符（# 退出）:");
    while((ch=getchar())!= '#')
    {
        printf("%c\t%d.\n",ch,ch);
        b++;
        if (b%a==0)
        printf("\n");
    }
    printf("\n");
    return 0;
}
