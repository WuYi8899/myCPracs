//��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������
#include<stdio.h>

int main(void)
{
	int number;
	int a,b;
	int c=1;   //����

	printf("������һ����������\n");
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

