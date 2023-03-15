#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int block[n];
    for(int i=0; i<n; i++)
    {
        cin>>block[i];
    }
    int left[n];
    int right[n];

    left[0]=block[0];
    right[n-1]=block[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]= max(left[i-1],block[i]);

    }
    for(int i=n-2; i>=0; i--)
    {
        right[i]= max(block[i],right[i+1]);
    }

    int traped_water = 0;
    for(int i=0;i<n;i++)
    {
        traped_water+=min(left[i],right[i])-block[i];
    }
    cout<<traped_water;
    return 0;
}
