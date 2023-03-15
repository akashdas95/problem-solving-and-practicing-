#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,tc,m,arr[55];
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d",&m);
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+m);
        int cnt = 0;
        for(j=1; j<m; j++)
        {
            if(arr[j]-arr[j-1]<=1)
            {
                cnt++;
            }
        }
        if(m-cnt==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
//Fk u compiler.
