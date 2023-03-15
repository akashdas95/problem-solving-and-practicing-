#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    char str[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }

    for(int i=0;i<n;i++)
    {
        str[i]=str[i] | (1<<5);
    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i];
    }

    return 0;
}
