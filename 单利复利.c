#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int menu();//���˵�
void fuli();//����
void danli();//����
void capital();//����
void time();//ʱ��
void rate();//����
void invest();//Ͷ��
void main()//������
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


int menu()//���˵�
	{
		int choice;
		printf("\t\t\t********����������********\t\t\t\n");
		printf("\t\t\t����ѡ��\t\t\t\n");
		printf("\t\t\t1.��������\t\t\t\n");
		printf("\t\t\t2.��������\t\t\t\n");
		printf("\t\t\t3.�������\t\t\n");
		printf("\t\t\t4.ʱ�����\t\t\t\n");
		printf("\t\t\t5.���ʼ���\t\t\t\n");
		printf("\t\t\t6.Ͷ�ʼ���\t\t\t\n");
		printf("\t\t\t������1-5���ܼ�:\t\t\t\n");
		while( (!(scanf("%d",&choice)))|| (choice<1)||(choice>5))//��������
		{
        printf("\n������ѡ��:\n");
        printf("\t\t\t����ѡ��\t\t\t\n");
		printf("\t\t\t1.��������\t\t\t\n");
		printf("\t\t\t2.��������\t\t\t\n");
		printf("\t\t\t3.�������\t\t\n");
		printf("\t\t\t4.ʱ�����\t\t\t\n");
		printf("\t\t\t5.���ʼ���\t\t\t\n");
		printf("\t\t\t6.Ͷ�ʼ���\t\t\t\n");
		printf("\t\t\t������1-5���ܼ�:\t\t\t\n");
		}
		return choice;
	}
	


void jisuan()//���㹫ʽ
	{
		printf("�������㹫ʽ\n");
		printf("F=P*(1+i)N�η�\t\n");
		printf("�������㹫ʽ\t\n");
		printf("I=P*i*N�η�\t\n");
		printf("������㹫ʽ\t\n");
		printf("P=F*(1+i)N�η�\t\n");
		printf("ʱ����㹫ʽ\t\n");
		printf("T=(int)(log(F/P)/log(1+i/m)/m)\t\n");
		printf("���ʼ��㹫ʽ\t\n");
		printf("R=m*(pow(F/P,1.0(N*m))-1)\t\n");

		printf("F:���ֵ:\t\n");
		printf("P:����:\t\n");
		printf("R:����:\t\n");
		printf("T:ʱ��:\t\n");
	}
    
	
void fuli() //����
	{
	int T,m;
	double R,F,P;
	jisuan();
	printf("���뱾��:");
	scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&R);
    printf("��������:");
    scanf("%d",&T);
    printf("�긴������:");
    scanf("%d",&m);
    F=P*pow((1+T/m),T*m);
    printf("���ֵ:%.4lf\n",F);
	}
   

void danli() //����
	{
    int T;
    double R,F,P;
    jisuan();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&R);
    printf("��������:");
    scanf("%d",&T);
    F=P*R*T;
    printf("���ֵ:%.4lf\n",F);
	}




 void capital() //����
	{
    int T,m;
    double R,F,P;
    jisuan();
    printf("��ֵ:");
    scanf("%lf",&F);
    printf("������:");
    scanf("%lf",&R);
    printf("��������:");
    scanf("%d",&T);
    printf("�긴������:");
    scanf("%d",&m);
    P=F/pow((1+R/m),R*m);
    printf("����:%.4lf\n",P);
	}



void time() //ʱ��
   {
	int T,m;
    double R,F,P;
    jisuan();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&R);
    printf("�긴������:");
    scanf("%d",&m);
    printf("��ֵ:");
    scanf("%lf",&F);
    T=(int)(log(F/P)/log(1+R/m)/m);
    printf("ʱ��:%d\n",T);
   }


void rate() //����
   {
    int T,m;
    double R,F,P;
    jisuan();
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("��������:");
    scanf("%d",&T);
    printf("�긴������:");
    scanf("%d",&m);
    printf("���ֵ:");
    scanf("%lf",&F);
    R=m*(pow(F/P,1.0/(T*m))-1);
    printf("����:%.4lf\n",R);
   }



void invest()//Ͷ��
{
    int T,n;
    double R,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("����ʱ��:");
    scanf("%d",&T);
    printf("������:");
    scanf("%lf",&R);
    printf("1:����Ͷ��\n2:����Ͷ��\n");
  A:printf("��ѡ����Ҫ�Ĺ���<1|2>:");
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
	  printf("��������!����������\n");
	  goto A;
  }
  printf("%d�����ܲ�ֵ:%.4lf\n",T,F);
}






