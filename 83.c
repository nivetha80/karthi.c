#include<stdio.h>
int main()
{
	int n,p,l,f;
	scanf("%d",&n);
	scanf("%d",&p);
	scanf("%d",&l);
	switch(l)
	{
		case 1:
		printf("%d",n/p);
		break;
		case 2:
		f=n%p;
		printf("%d",f);
		break;
		default:
		printf("enter the valid one");
	}
	return 0;
}
