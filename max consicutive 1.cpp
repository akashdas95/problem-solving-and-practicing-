#include "bits/stdc++.h"
using namespace std;

int max_con_one(int n, int arr[])
{
    int count = 0;
    int mx= 0;
    for(int i=0; i<n; i++){
        if(arr[i]== 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        mx= max(mx,count);
    }
    return mx;
}



main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<max_con_one(n,arr);

    return 0;
}
