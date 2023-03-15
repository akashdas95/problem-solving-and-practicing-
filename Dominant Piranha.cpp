#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,tc,x;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        scanf("%d",&n);
        vector<int>v(n);
        int mx=-1e9;
        bool flag=true;
        int ind=0;
        for(j=0; j<n; j++)
        {
            cin>>v[j];
            mx=max(mx,v[j]);
        }
        for(j=0; j<n-1; j++)
        {
            if(v[j]!=v[j+1])
            {
                flag=true;
                break;
            }
            else
            {
                flag =false;
            }
        }
        if(flag==true)
        {
            for(j=0; j<n; j++)
            {
                if(mx==v[j])
                {
                    if(v[j]!=v[0]||v[j]!=v[j+1])
                    {
                        ind=j+1;
                        break;
                    }
                }
            }
            printf("%d\n",ind);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

