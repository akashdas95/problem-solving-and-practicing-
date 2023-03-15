#include<bits/stdc++.h>//AC
using namespace std;

int partitionarray(int arr[],int l,int r)
{
    int i =l-1;
    for(int j=l;j<r; j++)
    {
        if(arr[j]<arr[r])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}


void quicksort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pivot= partitionarray(arr,l,r);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int r= n-1;
    quicksort(arr,l,r);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
