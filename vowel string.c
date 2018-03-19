#include <stdio.h>
int main()
{
	char a[10];
	int c,i;
	for(i=0;i<='\0';i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
