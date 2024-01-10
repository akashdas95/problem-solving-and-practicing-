#include "bits/stdc++.h"
using namespace std;

//brute force
main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            v.push_back(arr[i]);
        }
    }

    for (auto ir = v.begin(); ir != v.end(); ++ir)
    {
       cout << *ir << " ";
    }
    return 0;
}




//optimal
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    int mx=arr[n-1];
    v.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            v.push_back(mx);
        }
    }

    for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
    {
       cout << *ir << " ";
    }

    return 0;
}*/
