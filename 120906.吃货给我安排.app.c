#include<stdio.h>
#include<string.h>
int main(){
	char x[50];
	char a[]="春节";
	char b[]="端午节";
	char c[]="中秋节";
	char d[]="元宵节";
	scanf("%s",&x);
	if( strcmp(x,a) == 0){
		printf("吃饺子");}
	else if( strcmp(x,b) == 0){
		printf("吃粽子");}
	else if( strcmp(x,c) == 0){
		printf("吃月饼");}
	else if( strcmp(x,d) == 0){
		printf("吃汤圆");}
	else{
	printf("不是在吃，就是在去吃的路上");}
}
