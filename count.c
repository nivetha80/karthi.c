#include <stdio.h>
int main()
{
int n,count=0;
printf("enter any integer");
    scanf("%d",&n);
    if(n!=0)
    {
        n/=10;
        ++count;
    }
    printf("count the digits %d",count);
}

