#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc,n,arr[55];
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<(n*2)-1;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
