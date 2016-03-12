#include<stdio.h>
#include<math.h>
float i;	//利率
float p;	//期初金额
float F;	//未来值
int n;	//期数
void weilaizhi(){
printf("请输入本金数额");
scanf("%f",&p);


printf("请输入利率\n");
scanf("%f",&i);

printf("请输入本金期数\n");
scanf("%d",&n);

F=p*pow((1+i),n);
printf("未来值为%f",&F);


}

void benJin(){
printf("请输入期望数额\n");
scanf("%f",&F);


printf("请输入利率\n");
scanf("%f",&i);

printf("请输入本金期数\n");
scanf("%d",&n);
p = F/pow((1+i),n);

printf("你要存的本金额是%f",p);



}


void danli(){
printf("请输入本金数额\n");
scanf("%f",&p);


printf("请输入利率\n");
scanf("%f",&i);

printf("请输入本金期数\n");
scanf("%d",&n);

F=p*i*n;
printf("未来值为%f",F);

}


void main(void){

printf("------------复利计算------------\n");
int m;
printf("本金计算请按1，复利计算请按2，单利计算请按3\n");
do{	scanf("%d",&m);

if(m == 1){
benJin();
}if(m == 2){
weilaizhi();
}if(m == 3){
danli();
}else{
m = 0;
printf("你输入的数不正确，请重新输入");
}
}while( m == 0);


}
}
