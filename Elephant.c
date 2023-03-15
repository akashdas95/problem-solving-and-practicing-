
#include<stdio.h>
int main()
{
    int x,ans;
    scanf("%d",&x);
    if(x==1||x==2||x==3||x==4||x==5)
    {
        ans=1;
    }
    else if(x%5==0)
    {
        ans=x/5;
    }
    else
    {
        ans=(x/5)+1;
    }
    printf("%d",ans);
    return 0;
}
