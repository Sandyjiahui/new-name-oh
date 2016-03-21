#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int menu();//主菜单
void fuli();//复利
void danli();//单利
void capital();//本金
void time();//时限
void rate();//利率
void invest();//投资
void main()//主函数
{
	int choice;
	choice=menu();
	while(1)
	{
		switch(choice)
		{
		case 1:
			fuli();
			break;
		case 2:
			danli();
			break;
		case 3:
			capital();
			break;
		case 4:
			time();
			break;
		case 5: 
			rate();
			break;
		case 6:
			invest();
			break;
		}
		choice=menu();
	}
}


int menu()//主菜单
	{
		int choice;
		printf("\t\t\t********复利计算器********\t\t\t\n");
		printf("\t\t\t功能选择\t\t\t\n");
		printf("\t\t\t1.复利计算\t\t\t\n");
		printf("\t\t\t2.单利计算\t\t\t\n");
		printf("\t\t\t3.本金计算\t\t\n");
		printf("\t\t\t4.时间计算\t\t\t\n");
		printf("\t\t\t5.利率计算\t\t\t\n");
		printf("\t\t\t6.投资计算\t\t\t\n");
		printf("\t\t\t请输入1-5功能键:\t\t\t\n");
		while( (!(scanf("%d",&choice)))|| (choice<1)||(choice>5))//重新输入
		{
        printf("\n请重新选择:\n");
        printf("\t\t\t功能选择\t\t\t\n");
		printf("\t\t\t1.复利计算\t\t\t\n");
		printf("\t\t\t2.单利计算\t\t\t\n");
		printf("\t\t\t3.本金计算\t\t\n");
		printf("\t\t\t4.时间计算\t\t\t\n");
		printf("\t\t\t5.利率计算\t\t\t\n");
		printf("\t\t\t6.投资计算\t\t\t\n");
		printf("\t\t\t请输入1-5功能键:\t\t\t\n");
		}
		return choice;
	}
	


void jisuan()//计算公式
	{
		printf("复利计算公式\n");
		printf("F=P*(1+i)N次方\t\n");
		printf("单利计算公式\t\n");
		printf("I=P*i*N次方\t\n");
		printf("本金计算公式\t\n");
		printf("P=F*(1+i)N次方\t\n");
		printf("时间计算公式\t\n");
		printf("T=(int)(log(F/P)/log(1+i/m)/m)\t\n");
		printf("利率计算公式\t\n");
		printf("R=m*(pow(F/P,1.0(N*m))-1)\t\n");

		printf("F:最后值:\t\n");
		printf("P:本金:\t\n");
		printf("R:利率:\t\n");
		printf("T:时间:\t\n");
	}
    
	
void fuli() //复利
	{
	int T,m;
	double R,F,P;
	jisuan();
	printf("存入本金:");
	scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&R);
    printf("存入年限:");
    scanf("%d",&T);
    printf("年复利次数:");
    scanf("%d",&m);
    F=P*pow((1+T/m),T*m);
    printf("最后值:%.4lf\n",F);
	}
   

void danli() //单利
	{
    int T;
    double R,F,P;
    jisuan();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&R);
    printf("存入年限:");
    scanf("%d",&T);
    F=P*R*T;
    printf("最后值:%.4lf\n",F);
	}




 void capital() //本金
	{
    int T,m;
    double R,F,P;
    jisuan();
    printf("终值:");
    scanf("%lf",&F);
    printf("年利率:");
    scanf("%lf",&R);
    printf("存入年限:");
    scanf("%d",&T);
    printf("年复利次数:");
    scanf("%d",&m);
    P=F/pow((1+R/m),R*m);
    printf("本金:%.4lf\n",P);
	}



void time() //时间
   {
	int T,m;
    double R,F,P;
    jisuan();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&R);
    printf("年复利次数:");
    scanf("%d",&m);
    printf("终值:");
    scanf("%lf",&F);
    T=(int)(log(F/P)/log(1+R/m)/m);
    printf("时间:%d\n",T);
   }


void rate() //利率
   {
    int T,m;
    double R,F,P;
    jisuan();
    printf("存入本金:");
    scanf("%lf",&P);
    printf("存入年限:");
    scanf("%d",&T);
    printf("年复利次数:");
    scanf("%d",&m);
    printf("最后值:");
    scanf("%lf",&F);
    R=m*(pow(F/P,1.0/(T*m))-1);
    printf("利率:%.4lf\n",R);
   }



void invest()//投资
{
    int T,n;
    double R,F,P;
    printf("存入本金:");
    scanf("%lf",&P);
    printf("存入时间:");
    scanf("%d",&T);
    printf("年利率:");
    scanf("%lf",&R);
    printf("1:按年投资\n2:按月投资\n");
  A:printf("请选择你要的功能<1|2>:");
    scanf("%d",&n);
    if(n==1)
  {
	  F=P*(pow(1+R,T)-1)/R;
  }
  else if(n==2)
  {
	  F=T*12*(P*(R/12)+P);
  }
  else
  {
	  printf("输入有误!请重新输入\n");
	  goto A;
  }
  printf("%d年后的总产值:%.4lf\n",T,F);
}






