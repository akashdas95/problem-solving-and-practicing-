#include "bits/stdc++.h"
using namespace std;

const int N = 1e5;
int dp[N];

main()
{
    int n;
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]= dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;
}
