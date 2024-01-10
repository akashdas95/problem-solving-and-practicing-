#include "bits/stdc++.h"
using namespace std;


//don't know from where (sliding window technique) buy as L and sell as R pointer
/*main()
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
        int cost = arr[sell]- arr[buy];
        if(cost<0)
        {
            buy=sell;
            sell++;
        }
        else
        {
            profit= max(profit,cost);
            sell++;
        }
    }
    cout<<profit;
    return 0;
}*/

//optimal from striver
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int profit = 0;
    int mn= arr[0];
    int cost = 0;
    for(int i=1;i<n;i++)
    {
        int cost = arr[i]- mn;
        profit= max(profit,cost);
        mn= min(mn,arr[i]);
    }
    cout<<profit;
    return 0;
}*/
