#include<stdio.h>
#include<conio.h>
int main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%4==0)
{
printf("%d is a leap year");
}
else
{
printf("%d is not a leap year");
}
return 0;
}
