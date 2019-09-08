//编写一个程序读取输入，读到#字符停止，然后报告读取空格数，换行符数目以及所有的其它字符数目。

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("请输入字符，“#”结束: \n");
    while((ch = getchar()) !='#')
    {
        if(ch==' ')
            a++;
        else if(ch=='\n')
            b++;
        else
            c++;
    }
    printf("空格:%d, 换行符数:%d, 其他:%d\n", a,b,c);
    return 0;
}
