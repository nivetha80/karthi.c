#include<stdio.h>
int main()
{
	int n1,n2=1,n3=1,t,i;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		printf("%d",n2);
		t=n2+n3;
		n2=n3;
		n3=t;
	}
	return 0;
  }
