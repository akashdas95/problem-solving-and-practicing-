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

    int l=0,r=n-2;

    while(l<=r)
    {
        int mid =(l+r)>>1;
        if(arr[mid]==arr[mid^1])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<arr[l];
    return 0;
}
