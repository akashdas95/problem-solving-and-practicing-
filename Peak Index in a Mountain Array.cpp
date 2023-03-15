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

    int l=1,r=n-1;
    int flag = false;
    while(l<r)
    {
        int mid=(l+r)>>1;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<arr[mid];
            flag = true;
            break;
        }
        else if(arr[mid-1]>arr[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(!flag)
    {
       cout<<arr[r];
    }
    return 0;
}
