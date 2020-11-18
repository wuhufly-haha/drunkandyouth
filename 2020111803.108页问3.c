//第一题
#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(a+b>c&&b-c)
{
printf("命题为真\n");
}
else
{
printf("命题为假\n");
}
}

//第二题
#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(a||b+c&&b-c)
{
printf("命题为真\n");
}
else
{
printf("命题为假\n");
}
}

//第三题
#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(！(a>b)&&!c||1)
{
printf("命题为真\n");
}
else
{
printf("命题为假\n");
}
}

//第四题
#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(!(x=a)&&(y=b)&&0)
{
printf("命题为真\n");
}
else
{
printf("命题为假\n");
}
}

//第五题
#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(!(a+b)+c-1&&b+c/2)
{
printf("命题为真\n");
}
else
{
printf("命题为假\n");
}
}
