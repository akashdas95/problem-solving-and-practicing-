#include "bits/stdc++.h"
using namespace std;


//brute force
/*bool linear_search(int arr[], int n, int num)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i] == num)
        {
            return true;
        }
    }
    return false;
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
    int longest = 1;
    for(int i=0;i<n;i++)
    {
        int cnt = 1;
        int next_ele = arr[i];
        while(linear_search(arr,n,next_ele+1)== true)
        {
            cnt++;
            next_ele++;
        }
        longest = max(longest,cnt);
    }

    cout<<longest;
    return 0;
}*/


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
    sort(arr,arr+n);
    int longest = 1;
    int last_smallest = arr[0];
    int cnt = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-1 == last_smallest)
        {
            cnt++;
            last_smallest = arr[i];
        }
        else if(arr[i] != last_smallest)
        {
            cnt = 1;
            last_smallest = arr[i];
        }
        longest = max(longest,cnt);
    }

    cout<<longest;
    return 0;
}*/


//optimized
/*main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }

    int longest = 1;
    for(auto it: st)
    {
        if(st.find(it-1)==st.end())
        {
            int cnt = 1;
            int next_ele = it;
            while(st.find(next_ele+1)!= st.end())
            {
                next_ele++;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }

    cout<<longest;
    return 0;
}*/



