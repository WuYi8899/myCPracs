//��дһ��������ʾ�û�����һ�ܹ�����Сʱ����Ȼ���ӡ�����ܶ˰��;����롣
//1.�������� = 10��Ԫ/Сʱ��2.�Ӱࣨ����40Сʱ��= 1.5��ʱ�䡣3.˰�ʣ�ǰ300����Ϊ15%����150��ԪΪ20%�����µ�Ϊ25%��

#include<stdio.h>
int main()
#define JBGZ 10
#define JBSJ 40
#define JB1 300
#define JB2 450
#define JB3 150
#define SL1 0.15
#define SL2 0.2
#define SL3 0.25

{

    int xs,gz,jsr,sj;
    printf("������һ�ܹ���Сʱ��: \n");
    scanf("%d",&xs);
    while(xs>0)
    {
        if(xs<=JBSJ)          //ǰ40Сʱ
        {
            gz=JBGZ*xs;


           if(gz<=JB1)    //ǰ300����
           {

               sj=gz*SL1;
               jsr=gz-sj;
               printf("���ʽ��Ϊ %d ,˰��Ϊ %d , ������Ϊ  %d .\n",gz,sj,jsr);
               break;

           }
           else              //300
           {
               gz=JB1*SL1+(gz-JB1)*SL2;
               sj=gz*SL1;
               jsr=gz-sj;
               printf("���ʽ��Ϊ %d ,˰��Ϊ %d , ������Ϊ  %d .\n",gz,sj,jsr);
               break;
           }
        }
        else
           {
                gz=JBGZ*JBSJ+JBGZ*(xs-JBSJ)*1.5;
                if(gz<=JB2)
                {
                    sj=JB1*SL1+(gz-JB1)*SL2;
                    jsr=gz-sj;
                    printf("���ʽ��Ϊ %d ,˰��Ϊ %d , ������Ϊ  %d .\n",gz,sj,jsr);
                    break;
                }
                else
                {
                    sj=JB1*SL1+JB3*SL2;+(gz-JB2)*SL3;
                    jsr=gz-sj;
                    printf("���ʽ��Ϊ %d ,˰��Ϊ %d , ������Ϊ  %d .\n",gz,sj,jsr);
                    break;
                }

           }


    }

    return 0;
}
