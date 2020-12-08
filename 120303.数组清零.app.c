#include<stdio.h>
void main(){
	int a,b;
	int tangm[20][10]={
		{1,2,3},
		{4,5,6}
};
	for(a=0;a<20;a++){
		for(b=0;b<10;b++){
			
			tangm[a][b]=999;
	printf("%d  ",tangm[a][b]);
		}
		printf("\n");
	}
}
