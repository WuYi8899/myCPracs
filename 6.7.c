//����һ�����ʶ����ַ����У�Ȼ�����ӡ

#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("please enter a word: ");
    scanf("%s",a);
    for(i=strlen(a)-1;i>=0;i--)
        printf("%c",a[i]);
    printf("\n");
    return 0;
}
