#include<stdio.h>
int main()
{
	char a[10];
	int n,i;
	scanf("%s",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
