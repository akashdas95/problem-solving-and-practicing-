#include<stdio.h>
int main()
{
    int i,j,n,ans=0,array[105],array1[105];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=1; i<=n; i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(array[i]==array1[j])
            {
                ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
}

