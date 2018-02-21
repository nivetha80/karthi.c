#include<stdio.h>
int main()
{
  int i,cou=0;
  char b[100];
  scanf("%[^\n]s",b);
  for(i=0;b[i]!=NULL;i++)
  {
  	if(b[i]==' ')
  	{
  		cou++;
  	}
  	
  }
  printf("%d",cou+1);
  return 0;
}
