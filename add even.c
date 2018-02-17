#include<stdio.h>
int main()
{
	int n,p,m;
	scanf("%d %d",&n,&p);
	m=n+p;
	if(m%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
