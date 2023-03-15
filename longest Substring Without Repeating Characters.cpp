#include"bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    char str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    set<char>s;
    int l=0,r=0,res=0;
    while(r<n)
    {
        auto it = s.find(str[r]);
        if(it!= s.end())
        {
            s.erase(str[l]);
            l++;
        }
        else
        {
            s.insert(str[r]);
            r++;
            res=max(res,r-l+1);
        }
    }
    cout<<res;
    return 0;
}
