#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int b,c=0,i;
gets(a);
b=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0'||a[i]=='1')
{
c++;
}
}
if(b==c)
{
printf("yes");
}
else
{
printf("no");
}
}
