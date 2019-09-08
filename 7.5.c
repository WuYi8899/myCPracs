//用switch重写练习4。

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0,c=0;
    printf("请输入字符，“#”结束: \n");
    while((ch = getchar()) !='#')
    {
        switch(ch)
        {
            case '.':
            putchar('!');
            a++;
            break;
            case '!':
            putchar('!!');    //替换!!不成功
            b++;
            break;
            default:
                putchar(ch);

        }
    }
    printf("替换了'.' %d 次 ,替换了'!' %d 次。\n", a,b);
    return 0;
}
