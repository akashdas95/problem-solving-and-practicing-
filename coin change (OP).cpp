#include "bits/stdc++.h"
using namespace std;


main()
{
    int n;
    cin>>n;
    int coin[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>coin[i];
    }
    int target;
    cin>>target;
    int dp[target+1];
    for(int i=0;i<=target;i++)
    {
        dp[i]=target+1;
    }
    dp[0]=0;

    for(int i=1;i<=target;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(coin[j]<=i)
            {
                dp[i]= min(dp[i],1+dp[i-coin[j]]);
            }
            else
            {
                break;
            }
        }
    }
    if(dp[target]< target)
    {
        cout<<dp[target];
    }
    else
    {
        cout<<"not possible";
    }
    return 0;
}
