#include<stdio.h>
#include<math.h>
float i;	//����
float p;	//�ڳ����
float F;	//δ��ֵ
int n;	//����
void weilaizhi(){
printf("�����뱾������");
scanf("%f",&p);


printf("����������\n");
scanf("%f",&i);

printf("�����뱾������\n");
scanf("%d",&n);

F=p*pow((1+i),n);
printf("δ��ֵΪ%f",&F);


}

void benJin(){
printf("��������������\n");
scanf("%f",&F);


printf("����������\n");
scanf("%f",&i);

printf("�����뱾������\n");
scanf("%d",&n);
p = F/pow((1+i),n);

printf("��Ҫ��ı������%f",p);



}


void danli(){
printf("�����뱾������\n");
scanf("%f",&p);


printf("����������\n");
scanf("%f",&i);

printf("�����뱾������\n");
scanf("%d",&n);

F=p*i*n;
printf("δ��ֵΪ%f",F);

}


void main(void){

printf("------------��������------------\n");
int m;
printf("��������밴1�����������밴2�����������밴3\n");
do{	scanf("%d",&m);

if(m == 1){
benJin();
}if(m == 2){
weilaizhi();
}if(m == 3){
danli();
}else{
m = 0;
printf("�������������ȷ������������");
}
}while( m == 0);


}
}
