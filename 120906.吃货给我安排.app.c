#include<stdio.h>
#include<string.h>
int main(){
	char x[50];
	scanf("%s",&x);
	if(!strcmp(x,"春节")){
		printf("吃饺子\n");}
	else if(!strcmp(x,"端午节")){
		printf("吃粽子\n");}
	else if(!strcmp(x,"中秋节")){
		printf("吃月饼\n");}
	else if(!strcmp(x,"元宵节")){
		printf("吃汤圆\n");}
	else{
	printf("不是在吃，就是在去吃的路上");}



}
