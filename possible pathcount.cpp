#include<bits/stdc++.h>//AC
using namespace std;

int countpath(int s, int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }

    int total = 0;
    for(int i=1; i<=6; i++)
    {
       total += countpath(s+i,e);
    }
    return total;
}


int main()
{
    int s,e;
    cin>>s>>e;
    cout<<countpath(s,e);
    return 0;
}
