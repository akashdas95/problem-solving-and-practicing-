#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,tc;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&x,&y);
        }
        int sum=n;
         while(n>5)
         {
             n=n/2;
             sum+=n;
         }
       printf("%d\n",sum);
    }
    return 0;
}

