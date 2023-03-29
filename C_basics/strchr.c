#include<stdio.h>
#include<string.h>
int strchar(char s[],char c);
int main()
{
	int str;
	char c;
	printf("Enter any character:\n");
	scanf("%c",&c);
	char s[]="Mirafra Technologies";
	str=strchar(s,c);
	printf("%d\n",str);
}
int strchar(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			break;
		}
	}
printf("The first occurance is : ");

	return i;
}


