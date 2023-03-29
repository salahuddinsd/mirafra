#include<stdio.h>
int main()
{
int x,y;
printf("enter x and y values:\n");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping\nx=%d\ny=%d\n",x,y);
}
