#include "bits/stdc++.h"//BUG REPORTED
using namespace std;    //BUG SOLVED


//brute force
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mx=-2e9;

    for(int i=0;i<n;i++)
    {
        int product = 1;
        for(int j=i;j<n;j++)
        {
           product *=arr[j];
           mx=max(mx,product);
        }
    }
    cout<<mx;
    return 0;
}*/




//optimized
main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result=-2e5;
    int prefix=1;
    int suffix=1;

    for(int i=0;i<n;i++)
    {
       if(prefix==0)
       {
           prefix=1;
       }
       if(suffix==0)
       {
           suffix=1;
       }

       prefix *= arr[i];
       suffix *= arr[n-i-1];
       result = max({result,prefix,suffix});
    }
    cout<<result;
    return 0;
}


//optimized from neetcode
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result=-2e5;
    int currMax=1;
    int currMin=1;

    for(int i=0;i<n;i++)
    {
       if(arr[i]==0)
       {
           currMax=1;
           currMin=1;
       }

       int temp=arr[i]*currMax;
       currMax= max({arr[i]*currMax,arr[i]*currMin,arr[i]});
       currMin= min({temp,arr[i]*currMin,arr[i]});
       result = max(currMax,result);
    }
    cout<<result;
    return 0;
}*/
