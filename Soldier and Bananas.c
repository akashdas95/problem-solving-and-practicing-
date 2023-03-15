#include<stdio.h>
int main()
{
    int i,k,n,w,x,y,z=0,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1; i<=w; i++)
    {
        x=i*k;
        sum=sum+x;

    }
    if(n>sum)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d",sum-n);
    }

    return 0;
}

