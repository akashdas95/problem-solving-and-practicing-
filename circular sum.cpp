#include<bits/stdc++.h>//AC
using namespace std;

int kadane(int arr[], int n)
{
    int currsum=0,maxsum=-2e9;
    for(int i=0; i<n; i++)
    {
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}


int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int wrapsum,totalsum=0;
    for(int i=0; i<n; i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum= totalsum -(-kadane(arr,n));
    int ans;
    ans= max(wrapsum,nonwrapsum);
    cout<<ans;
    return 0;
}
