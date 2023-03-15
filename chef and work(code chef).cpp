#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,tc,cnt=0;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d %d",&n,&k);
        int arr[1005];
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr+n,arr);
        int m=n;
        if(arr[0]>=k)
        {
            printf("-1\n");
        }
        else
        {
            for(j=0; j<n; j++)
            {
                if(arr[j]+arr[m-1]>k-1)
                {
                    cnt++;
                }
                else if(arr[j]+arr[m-1])

            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

