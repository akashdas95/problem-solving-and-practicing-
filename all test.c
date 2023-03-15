#include <stdio.h>
int main()
{
    int i,j,n,tc,ara[10000000];
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d",&n);
        for (j=0;j<n;j++)
        {
            scanf("%d",&ara[j]);
        }
        bool flag = true;
        ara[n]=ara[0];
        int max=0;
        for(j=0;j<n;j++)
        {
            if(ara[j]==ara[j+1])
            {
                flag =false;
            }
            else
            {

            }
        }
    }
    return 0;
}
