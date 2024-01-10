#include<bits/stdc++.h>
using namespace std;


//brute force
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

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i; j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}*/


//optimized using prefix sum concept
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

    unordered_map<int,int>mpp;
    int prefix_sum = 0;
    int cnt = 0;
    mpp[0] = 1;

    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        int extra = prefix_sum - k;
        cnt+=mpp[extra];
        mpp[prefix_sum]++;
    }
    cout<<cnt;
    return 0;
}

