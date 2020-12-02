#include<stdio.h>
void main(){
	char x;
	printf("你在使用什么键\n");
	scanf("%c",&x);
	switch(x){
		case'A':printf("你在使用左键\n");break;
		case'S':printf("你在使用下键\n");break;
		case'W':printf("你在使用上键\n");break;
		case'D':printf("你在使用右键\n");break;
		default:printf("输入错误！请输入ASWD\n");
		}
}
