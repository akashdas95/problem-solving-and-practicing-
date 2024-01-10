#include<bits/stdc++.h>
using namespace std;


//brute force
int main()
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

    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int xr = 0;
        for(int j=i; j<n;j++)
        {
           xr ^=arr[j];
           if(xr == k )
           {
               cnt++;
           }
        }
    }
    cout<<cnt;
    return 0;
}


//optimized
//using prefix xor
/*int main()
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

    unordered_map<int,int>mpp;
    int prefix_xor = 0;
    int cnt = 0;
    mpp[0] = 1;

    for(int i=0;i<n;i++)
    {
        prefix_xor ^= arr[i];
        int extra = prefix_xor ^ k;
        cnt+=mpp[extra];
        mpp[prefix_xor]++;
    }
    cout<<cnt;
    return 0;
}*/
