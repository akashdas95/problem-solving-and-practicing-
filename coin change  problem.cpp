#include "bits/stdc++.h"
using namespace std;

const int N=1e4+2;
int arr[N][N];

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
    for(int i=0;i<=n;i++)
    {
        arr[i][0]=0;
    }
    for(int j=0;j<=target;j++)
    {
        arr[0][j]=j;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            if(coin[i-1]>j)
            {
                arr[i][j]=arr[i-1][j];
            }
            else
            {
                arr[i][j]= min(arr[i-1][j],1+arr[i][j-coin[i-1]]);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=target;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<arr[n][target];
    return 0;
}
