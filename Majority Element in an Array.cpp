#include "bits/stdc++.h"
using namespace std;

//brute force
/*main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
       int cnt=0;
       for(int j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               cnt++;
           }
       }
       if(cnt > n>>1)
       {
           cout<<arr[i];
           break;
       }
    }

    return 0;
}*/



//better
//hashing
/*main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        if(it.second > n>>1)
        {
           cout<<it.first;
           break;
        }
    }

    return 0;
}*/


//optimize
//moore's voting algorithm
main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ele,cnt=0;
    for(int i=0;i<n;i++)
    {
       if(cnt==0)
       {
           ele = arr[i];
           cnt=1;
       }
       else if(arr[i]== ele)
       {
           cnt++;
       }
       else
       {
           cnt--;
       }
    }
    int ele_cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            ele_cnt++;
        }
    }
    if(ele_cnt > n>>1)
    {
        cout<<ele;
    }
    else
    {
        cout<<-1;
    }

    return 0;
}
