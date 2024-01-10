#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int key, int ans)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid =(left+right)/2;
        if(arr[mid]>key)
        {
            ans = mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return ans;
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

    int key;
    cin>>key;
    int ans=n;
    cout<<lowerBound(arr,n,key,ans)<<endl;

    return 0;
}

