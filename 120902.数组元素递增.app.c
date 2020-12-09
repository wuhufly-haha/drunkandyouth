#include<stdio.h>
void main(){
		int i=91;
		int a,b;
		int ing[9][10]={
			{0,0,0},
			{0,0,0},
			{0,0,0}
	};
		for(a=0;a<9;a++){
			for(b=0;b<10;b++){
				i--;
				ing[a][b]=i;
				printf("%d ",ing[a][b]);
			}
			printf("\n");
		}
}
