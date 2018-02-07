#include<stdio.h>
int main()
{
  int a,b,t;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a!=0)
  {
  	t=a;
  	a=b;
  	b=t;
  	printf("%d %d",a,b);
  }
  return 0;
}
