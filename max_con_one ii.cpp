#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    int i=0,j=0,ans=-2e9,zero_count=0;

    while(j < n)
    {
        if(arr[j]==0)
        {
            zero_count++;
        }
        while(zero_count > k)
        {
            if(arr[i]==0)
            {
                zero_count--;
            }
            i++;
        }

        ans = max(ans,j-i+1);
        j++;
    }

    cout<<ans;

    return 0;
}
