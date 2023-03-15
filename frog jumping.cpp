#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a,b,k,n,tc;
    scanf("%lld",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        n=k/2;
        if(k%2==0)
        {
            printf("%lld\n",(a-b)*n);
        }
        else{
            printf("%lld\n",((a-b)*n)+a);
        }
    }
    return 0;
}

