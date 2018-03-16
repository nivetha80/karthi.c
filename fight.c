#include<stdio.h>
int main()
{
    int a,p=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            p=p+1;
        }
            }
    if(p==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
