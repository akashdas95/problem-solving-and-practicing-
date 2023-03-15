#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int lastIndex[26];

    for(int i=0;i<n;i++)
    {
        lastIndex[str[i]-'a']=i;
    }
    int i=0;
    cout<<"[";
    while(i<n)
    {
        int last=lastIndex[str[i]-'a'];
        int j=i;
        while(j!=last)
        {
            last=max(last,lastIndex[str[j++]-'a']);
        }
        int result = j-i+1;
        i=j+1;
        cout<<result;
        if(j<n-1)
        {
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}
