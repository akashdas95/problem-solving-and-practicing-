#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int buy=0;
    int sell=buy+1;
    int profit=0;
    while(sell<n)
    {
        if(arr[buy]>arr[sell])
        {
            buy=sell;
            sell++;
        }
        else
        {
            profit= max(profit,arr[sell]-arr[buy]);
            sell++;
        }
    }
    cout<<profit;
    return 0;
}
