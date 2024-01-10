#include "bits/stdc++.h"
using namespace std;


//brute force for both variant
/*main()
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

    bool flag = false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag)
        {
            cout<<"true";
        }
    else
    {
        cout<<"false";
    }

    return 0;
}*/



//optimize for variant 1
/*main()
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
    int s = 0,e = n-1;
    bool flag = false;
    while(s<e)
    {
        if(arr[s]+arr[e]==k)
        {
            flag=true;
            break;
        }
        else if(arr[s]+arr[e]>k)
        {
            e--;
        }
        else
        {
            s++;
        }

    }
    if(flag)
    {
        cout<<"true";
    }
    else
    {
        cout<<"else";
    }
    return 0;
}*/


//optimize for variant 2
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

    map<int,int> mpp;
    bool flag = false;
    int loc1, loc2;
    for(int i=0;i<n;i++)
    {
        int remaining = k-arr[i];
        if(mpp.find(remaining)!= mpp.end())
        {
            flag = true;
            loc1= mpp[remaining];// for indexing
            loc2 = i; //for indexing
            break;
        }
        mpp[arr[i]] = i;
    }
    if(flag)
    {
        cout<<"true at index "<<loc1<<" and "<<loc2;
    }
    else
    {
        cout<<"no";
    }

    return 0;
}
