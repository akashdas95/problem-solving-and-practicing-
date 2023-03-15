#include "bits/stdc++.h"
using namespace std;

const int N=1e3+2;
int arr[N];
int lis[N];


int LIS(int n)
{
    int ans=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                lis[i]=max(lis[i],1+lis[j]);
            }
        }
        ans=max(ans,lis[i]);
    }
    return ans;
}


main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }
    cout<<LIS(n);
    return 0;
}
