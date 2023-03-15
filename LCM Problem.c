#include<stdio.h>
int main()
{
    int i,n,a,b,x,ans=0;
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        scanf("%d %d",&a,&b);
        n=2*a;
        if(n<=b)
        {
            printf("%d %d\n",a,n);
        }
        else
        {
            printf("-1 -1\n");
        }
    }
    return 0;
}
