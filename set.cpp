#include<iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int i,n,k,t,cnt=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            cnt++;
        }
    }
    cout<<cnt<< '\n';
    return 0;
}
