//编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。
//1.基本工资 = 10美元/小时。2.加班（超过40小时）= 1.5倍时间。3.税率：前300美金为15%，续150美元为20%，余下的为25%。

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
    printf("请输入一周工作小时数: \n");
    scanf("%d",&xs);
    while(xs>0)
    {
        if(xs<=JBSJ)          //前40小时
        {
            gz=JBGZ*xs;


           if(gz<=JB1)    //前300工资
           {

               sj=gz*SL1;
               jsr=gz-sj;
               printf("工资金额为 %d ,税金为 %d , 净收入为  %d .\n",gz,sj,jsr);
               break;

           }
           else              //300
           {
               gz=JB1*SL1+(gz-JB1)*SL2;
               sj=gz*SL1;
               jsr=gz-sj;
               printf("工资金额为 %d ,税金为 %d , 净收入为  %d .\n",gz,sj,jsr);
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
                    printf("工资金额为 %d ,税金为 %d , 净收入为  %d .\n",gz,sj,jsr);
                    break;
                }
                else
                {
                    sj=JB1*SL1+JB3*SL2;+(gz-JB2)*SL3;
                    jsr=gz-sj;
                    printf("工资金额为 %d ,税金为 %d , 净收入为  %d .\n",gz,sj,jsr);
                    break;
                }

           }


    }

    return 0;
}
