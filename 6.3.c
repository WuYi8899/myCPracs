//Ç¶Ì×´òÓ¡×Ö·û
#include <stdio.h>
int main (void)
{
    int i,b;
    char ch;
    for(i=0;i<=5;i++)
    {
        for(b=1,ch='F';b<=i+1;b++,ch--)
        printf("%c",ch);
        printf("\n");
    }

    return 0;
}
