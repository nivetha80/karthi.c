#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter any character");
scanf("%c",&c);
if(c>=65&&c<=90)||(c>=97&&c<=122)
{
printf("entered character is alphabet");
}
else
{
printf("entered character is not alphabet");
}
