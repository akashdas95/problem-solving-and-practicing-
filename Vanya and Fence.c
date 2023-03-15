#include<stdio.h>
int main()
{
    int i,n,h,a,ans=0;
    scanf("%d %d",&n,&h);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>h){
            ans=ans+2;
        }
        else{
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}

