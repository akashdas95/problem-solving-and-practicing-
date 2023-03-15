#include<bits/stdc++.h>
using namespace std;

int possiblepath(int n, int i, int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 0;
    }

    return possiblepath(n,i+1,j)+possiblepath(n,i,j+1);
}

int main()
{
    int n,i=0,j=0;
    cin>>n;
    cout<<possiblepath(n,i,j);
    return 0;
}
