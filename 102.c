#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a%2==0)
	{
	c=a/2;
	printf("%d",c);
	}
	if(b%2!=0)
	{
		printf("\t%d",b);
	}
	return 0;
}
