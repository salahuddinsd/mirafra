#include<stdio.h>
#include<string.h>
int mystrlen(char str[]);
int main()
{
	char str[100]="Mirafra technologies";
	printf("%u\n",mystrlen(str));
}
int mystrlen(char str[])
{
	int i=0;
	while(str[i]!=0)
		i++;
	printf("The length of the string is : ");
	return i;
}


