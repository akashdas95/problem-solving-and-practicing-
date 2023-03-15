#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int expected_sum = (n*(n-1))>>1;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+= arr[i];
    }
    cout<<arr_sum-expected_sum;
    return 0;
}
