//����26��Ԫ�ص����飬�������д洢26��Сд��ĸ��Ȼ����ӡ����=
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
