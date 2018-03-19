#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	scanf("%s",a);
	int n,i,j,c=0;
	n=strlen(a);
	for(i=0,j=n-1;i<=n/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
