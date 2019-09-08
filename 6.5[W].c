//Ç¶Ì×´òÓ¡×Ö·û
/*         A
          ABA   */

#include <stdio.h>
int main (void)
{
    char ch;
    char a='A';
    char x;
    printf("Please input an uppercase letter:");
    scanf("%c", &ch);
    a=ch-64;
    int i,j;
    for (i=0;i<a;i++)
    {

        int i,j;
        for (j=0;j<=a-i;j++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        for (j=i;j<i;j--)
        {
            printf("%c",x);
            x--;
        }

        printf("\n");
    }
    return 0;
}
