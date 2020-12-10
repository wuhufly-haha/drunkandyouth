#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	char b[]="宝塔镇河妖";
	int x;
	printf("小霸王猜数字机器，请输入密码\n");
	printf("天王盖地虎，_______________。\n");
	scanf("%s",&a);
	if ( strcmp(a,b) == 0){
		printf("Ours game begin!\n");
		printf("请输入1到20以内的数字\n");
		while(1)
		{
			scanf("%d",&x);
			if(x==15){
				printf("小霸王你真厉害!\n");}
			else if(x>15&&x<=20){
				printf("数字太大了\n");}
			else if(x<15&&x>=0){
				printf("数字太小了\n");}
			else{
				printf("审题了吗，亲");}
		}
	}
	else{
	printf("不会吧不会吧，有人不知道答案手动狗头[doge]\n");}
}
