#include "bits/stdc++.h"//BUG REPORTED
using namespace std;    //BUG SOLVED

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
}
