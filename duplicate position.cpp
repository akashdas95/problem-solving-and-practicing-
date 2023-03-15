#include "bits/stdc++.h"
using namespace std;


int first_position(int arr[], int target, int n)
{
    int start=0;
    int end= n-1;
    int position_ind=-1;
    while(start<=end)
    {
        int mid= start+(end-start)/2;
        if(arr[mid]>=target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

        if(arr[mid]==target)
        {
            position_ind=mid;
        }
    }
    return position_ind;
}

int second_position(int arr[], int target, int n)
{
    int start=0;
    int end= n-1;
    int position_ind=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]<=target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

        if(arr[mid]==target)
        {
            position_ind=mid;
        }
    }
    return position_ind;
}

main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<first_position(arr,target,n)<<" "<<second_position(arr,target,n);
    return 0;
}
