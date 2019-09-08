//编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
#include<stdio.h>

int main(void)
{
	int number;
	int a,b;
	int c=1;   //定义

	printf("请输入一个正整数：\n");
	while(scanf("%d",&number)==1 && number>0)
	{
		for (a=2;a<=number;a++)
        {
            for (b=2;b<=a;b++)
            {
                if (a%b==0 && b != a )
                    {
                        c=0;
                        break;
                    }
            }
            if (c==1)
                {
                	printf("%d ",a);
				}
			c= 1;
		}
		break;
	}
	return 0;
}

