#include<stdio.h>
int main()
{
    int i,n,p,v,t,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2)
        {
            sum++;
        }

    }
    printf("%d",sum);
    return 0;
}
