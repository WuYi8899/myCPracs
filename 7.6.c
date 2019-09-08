//编写程序读取输入，读到#停止，报告ei出现的次数。用“Receive your eieio award”的输入来测试。

#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0;
    printf("请输入一段话，以“#”结束: \n");
    while((ch = getchar()) !='#')
    {
        if(ch=='e')
        {
            a++;
        }

        else if(ch=='i')
           {
            b++;
           }


    }
    printf("e出现了： %d 次 ,i出现了： %d 次。\n", a,b);
    return 0;
}
