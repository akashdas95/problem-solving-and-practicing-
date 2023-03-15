#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,k,n,tc;
    char str[105];
    scanf("%d",&n);
    scanf("%s",str);
    int cnt=0,ans=0;
    for(i=0; i<n; i++)
    {
        if(str[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>2)
            {
                cnt-=2;
                ans+=cnt;
            }
            cnt=0;
        }
    }
    if(cnt>2)
    {
        cnt-=2;
        ans+=cnt;
    }
    printf("%d",ans);
    return 0;
}//from AAA.
