#include "bits/stdc++.h"
using namespace std;

const int N=1e3;
int dp[N][N];

main()
{
    int n;
    cin>>n;
    char arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    char arr1[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0 || i==0)
            {
                dp[i][j]=0;
            }
            else if(arr[i-1]==arr1[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    int res=-1e5;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            res=max(res,dp[i][j]);
        }
    }
    cout<<res;
    return 0;
}
