#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	if((n>=a)&&(n<=b))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
