#include<stdio.h>
void  main(){
int  x;
scanf ("%d",&x);
if(x>=0  &&  x<=100){
printf("贫困打工人");}
else if(x>=101 && x<=1000){
printf("一般打工人");}
else  if(x>=1001 && x<=2000){
printf("土豪打工人");}
else{
printf("输入有误");}
}
