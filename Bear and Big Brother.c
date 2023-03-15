#include<stdio.h>
int main()
{
    int a,b,ans=0;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        ans++;
    }
    printf("%d",ans);
    return 0;
}
