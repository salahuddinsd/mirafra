#include<stdio.h>
#include<string.h>
void mystrcpy(char [],char []);
int main()
{
char s[]="Mirafra";
char d[10];
mystrcpy(s,d);
printf("%s\n",s);
}
void mystrcpy(char d[],char s[])
{
int i=0;
while(d[i]!='\0')
{
s[i]=d[i];
i++;
}
printf("the string copied from source to destination is :");
s[i]=d[i];
}

