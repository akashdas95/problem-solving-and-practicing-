#include "bits/stdc++.h"
using namespace std;


//brute force
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> pos;
    vector <int> neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    for(int i=0;i<n/2;i++)
    {
        arr[i*2]= pos[i];
        arr[i*2+1]= neg[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/



//optimal
main()
{
    int n;
    cin>>n;
    int arr[n];
    int res[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos=0,neg =1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
           res[pos]= arr[i];
           pos+=2;
        }
        else
        {
            res[neg] = arr[i];
            neg+=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
