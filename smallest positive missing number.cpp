#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int N =-1e6;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        N=max(arr[i],N);
    }
    bool check[N];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]]=1;
        }
    }

    for(int i=1; i<N; i++)
    {
        if(check[i]==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
