#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("entered character is vowel");
}
else
{
printf("entered character is constant");
}
getch();
}
