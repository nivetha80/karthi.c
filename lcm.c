#include <stdio.h>
int main()
{
	int a,b,g,i,p;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<a;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			g=i;
		}
	}
	p=(a*b)/g;
	printf("%d",p);
	return 0;
}
