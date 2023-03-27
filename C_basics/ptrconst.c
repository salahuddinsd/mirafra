#include<stdio.h>
int main()
{
int x=21,y=24;
int const *ptr;
ptr=&x;
printf("%d\n",x);
ptr=&y;
printf("%d\n",y);
}

