#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    /*int s=0,e=n-1;
    bool flag = false;
    while(s<e)
    {
        if(arr[s]+arr[e]<k)
        {
            s++;
        }
        else if(arr[s]+arr[e]>k)
        {
            e--;
        }
        else if(arr[s]+arr[e]==k)
        {
            flag=true;
            break;
        }
        else
        {
            flag=false;
        }
    }
    if(flag==true)
    {
        cout<<"sum exist";
    }
    else
    {
        cout<<"sum don't exist";
    }*/
    int k = -3 + 5;
    cout<<k;
    return 0;
}
