#include<stdio.h>
int strcmp(char s1[],char s2[]);
int main()
{
	int n;
	char s1[n];
	char s2[n];
	printf("Enter the size\n");
	scanf("%ls",&n);
	printf("Enter the string s1\n");
	scanf("%s",s1);
	printf("Enter the string s2\n");
	scanf("%s",s2);
	printf("string:%d",strcmp(s1,s2));
}
int strcmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]<s2[i])
			return -1;
		else if(s1[i]>s2[i])
			return 1;
	}
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return 1;
	if(s1[i]=0&&s2[i]==0)
		return 1;
}

