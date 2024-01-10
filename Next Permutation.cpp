#include "bits/stdc++.h"
using namespace std;


main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx =-1;
    for(int i=n-2;i>=0;i--)
    {
       if(arr[i] < arr[i+1]){
         idx = i;
         break;
       }
    }
    for(int i=n-1;i>idx;i--)
    {
        if(arr[i] > arr[idx])
        {
            int temp= arr[idx];
            arr[idx]= arr[i];
            arr[i] = temp;
            break;
        }
    }
    int j =n-1;
    for(int i = idx+1; i<=(n-idx+1)>>1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
