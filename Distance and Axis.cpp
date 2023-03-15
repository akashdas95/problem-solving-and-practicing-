#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,tc;
    scanf("%d",&tc);
    for(i=1; i<=tc; i++)
    {
        scanf("%d %d",&n,&k);

         if(n<=k)
        {
            printf("%d\n",k-n);
        }
        else if((k%2)!=(n%2))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
