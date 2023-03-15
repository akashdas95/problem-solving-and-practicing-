#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid =(left+right)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
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
    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}
