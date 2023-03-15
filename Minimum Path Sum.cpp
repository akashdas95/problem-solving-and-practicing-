#include "bits/stdc++.h"
using namespace std;

main()
{
    int n,m;
    cin>>n>>m;

    int grid[n][m];
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cin>>grid[row][col];
        }
    }

    int dp[n][m];

    for(int row=0;row <n; row++)
    {
        for(int col=0;col <m; col++)
        {
            if(row==0 && col==0)
            {
                dp[row][col]=grid[row][col];
            }
            else if(row==0)
            {
                dp[row][col]=grid[row][col]+dp[row][col-1];
            }
            else if(col==0)
            {
                dp[row][col]= grid[row][col]+dp[row-1][col];
            }
            else
            {
                dp[row][col]= grid[row][col]+ min(dp[row][col-1],dp[row-1][col]);
            }
        }
    }

    /*for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cout<<dp[row][col]<<" ";
        }
        cout<<"\n";
    }*/
    cout<<dp[n-1][m-1];
    return 0;
}
