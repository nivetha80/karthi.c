#include<stdio.h>
int main()
{
char a[100];
int b=0,b1=0,i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
b++;
}
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')
{
b1++;
}
}
if(b>0&&b1>0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

