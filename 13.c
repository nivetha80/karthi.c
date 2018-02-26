#include<stdio.h>
int main()
{
  int a,r,s,i;
  scanf("%d",&a);
  while(a!=0)
  {
    r=a%10;
    s=s+r;
    a=a/10;
    if(r%2!=0)
    {
      printf("%d\t",r);
    }
  }
  return 0;
}
