#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
d=a*b;
if(d!=0)
{
e=d%c;
printf("%d",e);
}
return 0;
}
