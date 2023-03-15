#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int height[n];
    for(int i=0; i<n; i++)
    {
        cin>>height[i];
    }

    int max_area = 0;

    for(int i=1; i<n; i++)
    {
        int cnt = 1;
        int left=i;
        while(left-1>=0 && height[left-1] >= height[i])
        {
            cnt++;
            left--;
        }
        int right=i;
        while(right+1<n && height[right+1]>=height[i])
        {
            cnt++;
            right++;
        }
        max_area=max(max_area,(height[i]*cnt));
    }
    cout<<max_area;
    return 0;
}
