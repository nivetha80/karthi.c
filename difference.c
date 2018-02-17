#include<stdio.h>
int main()
{
	int c,d,e;
	scanf("%d %d",&c,&d);
	e=c-d;
	if(e%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
