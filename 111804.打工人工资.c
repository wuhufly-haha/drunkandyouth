 #include<stdio.h>
void main(){
int n;
scanf("%d",&n);
if(n<-1)
{printf("您的花呗未还，无法使用该程序！");}
else if(n>0&&n<=500)
{printf("赤贫");}
else if(n>501&&n<=1500)
{printf("贫困");}
else if(n>1501&&n<=3000)
{printf("普通打工人");}
else if(n>3001&&n<=5000)
{printf("普通清洁工");}
else if(n>5001&&n<=12000)
{printf("水电工工资");}
else if(n>12001&&n<=50000)
{printf("脑袋大脖子粗不是老板是伙夫");}
else if(n>50001&&n<=20000000)
{printf("程序员");}
else {
printf("输入错误");
}
}
