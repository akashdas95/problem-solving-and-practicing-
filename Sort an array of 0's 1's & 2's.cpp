#include "bits/stdc++.h"
using namespace std;

//better
/*main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    for(int i=0;i<zero;i++)
    {
        arr[i]=0;
    }
    for(int i=zero;i<zero+one;i++)
    {
        arr[i]=1;
    }
    for(int i=zero+one;i<n;i++)
    {
        arr[i]=2;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}*/





//most optimized
//Dutch national flag algorithm
/*main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int temp = arr[low];
            arr[low]= arr[mid];
            arr[mid]=temp;
            low++,mid++;
        }
        else if(arr[mid]==2)
        {
            int temp = arr[mid];
            arr[mid]= arr[high];
            arr[high] = temp;
            high--;
        }
        else
        {
            mid++; //when mid is 1
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}*/
