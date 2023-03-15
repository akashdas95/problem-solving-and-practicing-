#include "bits/stdc++.h"
using namespace std;

main()
{
    int n,k;
    cin>>n>>k;
    int sum[n];
    for(int i=0;i<n;i++)
    {
        cin>>sum[i];
    }
    sort(sum,sum+n);
    int closest = 2e5;
    int result=0;
    for(int i=0;i<n-2;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int current = sum[i]+sum[l]+sum[r];

            if(current < k)
            {
                l++;
            }
            else
            {
                r--;
            }

            if(abs(closest)>abs(current-k))
            {
                closest= current-k;
                result= current;
            }
        }
    }
    cout<<result;
    return 0;
}
