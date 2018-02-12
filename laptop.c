#include<stdio.h>
int main()
{
	int n,i;
	char a[10];
	scanf("%[^\n]s",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%s\n",a);
	}
	return 0;
}
