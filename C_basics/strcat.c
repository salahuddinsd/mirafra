#include<stdio.h>
void strrcat(char s1[],char s2[])
{
int i,j,l=0;
for(i=0;s1[i]!=0;i++)
{
l++;
}
for(i=l,j=0;s2[j]!=0;i++,j++)
{
s1[i]=s2[j];
}
s1[i]=0;
printf("%s",s1);
}
int main()
{
char s1[100];
char s2[100];
printf("enter string1:\n");
scanf("%s",s1);
printf("enter string2:\n");
scanf("%s",s2);
strrcat(s1,s2);
printf("\n");
}
