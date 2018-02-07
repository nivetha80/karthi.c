#include<stdio.h>
int main()
{
  int i,count=0;
  char a[100];
  scanf("%[^\n]s",a);
  for(i=0;a[i]!=NULL;i++)
  {
  	if(a[i]=='.')
  	{
  		count++;
  	}
  	
  }
  printf("%d",count+1);
  return 0;
}
