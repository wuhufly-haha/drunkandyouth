#include<stdio.h>
#include<windows.h>
void main(){
	char a[]="a,b";
	char b[]="a,b";
	if (strcmp(a,b)==0){
		printf("相同\n");}
	else{
		printf("不相同\n");}
}
