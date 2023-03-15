#include<bits/stdc++.h>//AC
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int mx = -2e9;
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    int N = mx+1;
    int ind[N];
    for(int i=0; i<N; i++)
    {
        ind[i] = -1;
    }
    int mnidx = 2e9;
    for(int i=0; i<n; i++)
    {
        if(ind[arr[i]]!=-1)
        {
            mnidx = min(mnidx,ind[arr[i]]);
        }
        else
        {
            ind[arr[i]]=i;
        }
    }
    if(mnidx==2e9)
    {
        cout<<"-1";
    }
    else
    {
        cout<<mnidx;
    }
    return 0;
}
