#include<stdio.h>
int main()
{
int a,d,n,i,sum=0;
printf("Enter the number");
scanf("%d %d %d",&a,&d,&n);
for(i=1;i<=n;i++)
{
sum=sum+a*(i*d);
}
printf("%d",sum);
return 0;
}
