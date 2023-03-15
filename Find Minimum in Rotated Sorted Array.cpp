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
    int l=0,r=n-1;
    int result=2e5;
    while(l<=r)
    {
        if(arr[l]<arr[r])
        {
            result= min(result,arr[l]);
            break;
        }

        int mid = (l+r)/2;
        result= min(arr[mid],result);
        if(arr[l]<=arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<result;
    return 0;
}
