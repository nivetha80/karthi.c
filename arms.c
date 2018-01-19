#include<stdio.h>
#include<conio.h>
int main()
{
int n,t,rem,result=0;
printf("Enter the number");
scanf("%d",&n);
t=n;
while9n!=0)
{
rem=n%10;
result=result+rem*rem+rem;
n=n/10;
}
if(t==result)
{
printf("yes",n);
}
else
{
printf("No",n);
}
