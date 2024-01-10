#include "bits/stdc++.h"
using namespace std;


//given R and C. what is the value at that place?
//brute force
/*main()
{
    int n,r;
    cin>>n>>r;
    int res=1;
    for(int i=0;i<r;i++)
    {
        res= res*(n-i);
        res= res/(i+1);
    }
    cout<<res;
    return 0;
}*/



//print any nth row that is asked for
//brute force
main()
{
    int n;
    cin>>n;
    int res=1;
    cout<<res<<" ";
    for(int i=1;i<n;i++)
    {
        res= res*(n-i);
        res= res/i;
        cout<<res<<" ";
    }
    return 0;
}











