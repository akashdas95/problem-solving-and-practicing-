#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"0";
    }
    else
    {
       int arr[n+1];
       for(int i=0;i<n;i++)
       {
         cin>>arr[i];
       }
       int profit[n+1];
       profit[0]=arr[0];
       profit[1]=max(arr[0],arr[1]);

       for(int i=2;i<n;i++)
       {
         profit[i]=max(arr[i]+profit[i-2],profit[i-1]);
       }
       cout<<profit[n-1];
    }
    return 0;
}
