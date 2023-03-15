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
    int height;
    int mx=-2e5;
    int left=0;
    int right = n-1;

    while(left<right)
    {
        height=min(arr[left],arr[right]);
        mx=max(height*(right-left),mx);
        if(arr[left]<arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout<<mx;
    return 0;
}
