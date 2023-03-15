#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d %d",&n,&a);
    if(n>a)
    {
        printf("%d %d",a,(n-a)/2);
    }
    else
    {
        printf("%d %d",n,(a-n)/2);
    }
    return 0;
}
