#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int sum[n];
    for(int i=0;i<n;i++)
    {
        cin>>sum[i];
    }

    deque<int>dq;

    for(int i=0;i<n;i++)
    {
        if(!dq.empty() && dq.front()==i-k)
        {
            dq.pop_front();
        }

        while(!dq.empty() && sum[i]>=sum[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        if(i+1>=k)
        {
            cout<<sum[dq.front()]<<" ";
        }
    }
    return 0;
}
