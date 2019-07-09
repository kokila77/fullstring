#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s1[100];
int i,w=1;
fgets(s1,sizeof s1,stdin);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==' '||s1[i]=='\n'||s1[i]=='\t')
{
w++;
}
}
printf("%d",w-1);
}
