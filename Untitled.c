#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        printf("%d\n",(n+1)/2);
    }
    return 0;
}
