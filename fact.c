#include<stdio.h>
#include<coio.h>
void main()
{
int a,b,fact;
printf("Enter the number");
scanf("%d",&b);
fact=1;
for(a=1;a<=b;a++)
{
fact=fact*a;
}
printf("Factorial of a number is %d",fact);
}
