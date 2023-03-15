#include<stdio.h>
int main()
{
    int i,n,ans=0;
    scanf("%d",&n);
    ans=ans+(n/100);
    n=n%100;
    ans=ans+(n/20);
    n=n%20;
    ans=ans+(n/10);
    n=n%10;
    ans=ans+(n/5);
    n=n%5;
    ans=ans+n;
    printf("%d",ans);
    return 0;
}
