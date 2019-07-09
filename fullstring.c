#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s1[100];
int n;
fgets(s1,sizeof s1,stdin);
n=strlen(s1);
printf("%s %d",s1,n);
}
