#include "bits/stdc++.h"
using namespace std;

main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int l=0,r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;

        if(arr[mid]==k)
        {
            cout<<mid;
            break;
        }

        if(arr[l]<=arr[mid])//left sorted area
        {
            if(arr[mid] < k || arr[l] > k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        else //right sorted area
        {
            if(arr[mid]>k || arr[r]<k)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    }
    return 0;
}
