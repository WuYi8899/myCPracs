//Ç¶Ì×´òÓ¡×Ö·û
/*A
  BC
  DEF
  GHIJ
  KLMNO
  PQRSTU*/

#include <stdio.h>
int main (void)
{
    int i,b;
    char ch='A';
    for(i=0;i<6;i++)

    {
        for(b=0;b<=i;b++)
        {


        printf("%c",ch);
        ch++;

        }
         printf("\n");
    }

    return 0;
}
