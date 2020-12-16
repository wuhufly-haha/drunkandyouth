#include<stdio.h>
int function(int x){
	if(x<=0){
	return 0;
	}
	return x+function(x-1);
}
void main(){
	int a;
	scanf("%d",&a);
	printf("%d",function(a));
}
