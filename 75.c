#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int n,b;
	scanf("%s",a);
	n=strlen(a);
	b='*';
	a[n/2]=b;
	if(n%2==0)
	{
		a[(n-1)/2]=b;
	}
	printf("%s",a);
	return 0;
	
}
