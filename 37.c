#include<stdio.h>
int main()
{
int e,f;
scanf("%d %d",e,f);
if(e!=0)
{
e=e+f;
f=e-f;
e=e-f;
}
printf("%d  %d",e,f);
return 0;
}
