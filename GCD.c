#include<stdio.h>
int main()
{
    int a,b,x,n,gcd;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    for(; n>=1; n--)
    {
        if (a%x==0 && b%x==0)
        {
            gcd=x;

        }
    }
    printf("Gcd is %d",gcd);
    return 0;
}
