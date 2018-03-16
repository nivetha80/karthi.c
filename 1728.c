#include <stdio.h>
int main()
{
	int n,k;
	int a=1,i=1;
	scanf("%d",&n);
	scanf("%d",&k);
	while(i<=k)
	{
		a=a*n;
		i++;
	}
	printf("%d",a);
	return 0;
}
