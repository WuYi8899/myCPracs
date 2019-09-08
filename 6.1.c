//创建26个元素的数组，并在其中存储26个小写字母，然哈打印所有=
#include <stdio.h>
int main (void)
{
    char ch[26];
    int i;
    for(i=0;i<26;i++)
    {
        ch[i]='a'+1;
        printf("%3c",ch[i]);
    }

    return 0;
}
