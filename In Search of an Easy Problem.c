#include<stdio.h>
int main()
{
    int i,n,a,ans=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        ans=ans+a;

    }
    if(ans==0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    return 0;
}

