#include<stdio.h>
int main()
{
	int i,count=0;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
