#include <stdio.h>
#include <string.h>
#define SECOND "please enter your second name:"
#define FIRST "please enter your first name:"

int main(void)
{
    char firstname[40];
    char secondname[40];
    printf("%s", SECOND);
    scanf("%s", &secondname);
    printf("%s",FIRST);
    scanf("%s", &firstname);
    printf("%10s %10s\n", secondname, firstname);
    printf("%10d %10d\n", strlen(secondname), strlen(firstname));
    return 0;
}