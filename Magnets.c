#include<stdio.h>
int main()
{
    int i,j,n,ans=0;
    int array[100005];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }
    for(i=0; i<n; i++)
    {
        if(array[i]!=array[i-1])
        {
            ans++;
        }
    }

    printf("%d",ans);
    return 0;
}

