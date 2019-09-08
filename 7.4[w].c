//使用if else语句编写一个程序读取输入，读到#停止。用感叹号代替句号，用两个感叹号代替原来的感叹号，
//最后报告进行了多少次替代。

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("请输入字符，“#”结束: \n");
    while((ch = getchar()) !='#')
    {
        if(ch=='.')
        {
            putchar('!');
            a++;
        }

        else if(ch=='!')
           {
            putchar('!!');    //替换!!不成功
            b++;
           }
        else
        {
             putchar(ch);
        }

    }
    printf("替换了'.' %d 次 ,替换了'!' %d 次。\n", a,b);
    return 0;
}
