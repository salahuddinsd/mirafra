#include<stdio.h>
int main()
{
int x=21;
int *const ptr=&x;
*ptr=24;
printf("%d\n",x);
}
