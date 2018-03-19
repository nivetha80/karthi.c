#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int n,i,j,c=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0,j=i+1;i<n,j<=n;i++,j++)
	{
		if(a[i]!=a[j])
		{
		c++;	
		}
	}
	if(c==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
