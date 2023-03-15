#include<bits/stdc++.h>//AC
using namespace std;


bool mergeall(int arr[], int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}


bool mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        mergeall(arr,l,mid,r);
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
    int l= 0;
    int r= n-1;
    mergesort(arr,l,r);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
