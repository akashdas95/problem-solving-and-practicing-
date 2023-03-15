#include<stdio.h>
int main()
{
    int i,n,a,b,ans=0;
    scanf("%d %d",&n,&a);
    b=240-a;
    for(i=1; i<=n; i++)
    {
        if(b>=5*i)
        {
            ans++;
            b-=5*i;
        }
    }
    printf("%d",ans);
    return 0;
}

