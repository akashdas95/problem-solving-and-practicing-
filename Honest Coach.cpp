#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,tc,diff;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d",&n);
        int arr[55];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+n);
        int mn=2e9;
        for(j=1;j<n;j++)
        {
            diff=arr[j]-arr[j-1];
            if(mn>diff)
            {
               mn=diff;
            }
        }
        printf("%d\n",mn);
    }

    return 0;
}

