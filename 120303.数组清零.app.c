#include<stdio.h>
void main(){
		int a,b;
		int ing[3][3]={
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
			printf("%d ",ing[a][b]);
			}
			printf("\n");
		}
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
			ing[a][b]=0;
		printf("%d ",ing[a][b]);
			}
		printf("\n" ,ing[a][b]);
		}
		
			


}
