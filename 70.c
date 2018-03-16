#include<stdio.h>
int main()
{
  int m,n,p;
    scanf("%d",&n);
    p=(n&(n-1));
    if(p==0)
    {
    m=n*2;
    printf("%d",m);
    }
    return 0;
 }
