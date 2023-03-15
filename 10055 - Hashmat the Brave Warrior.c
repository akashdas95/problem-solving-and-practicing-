#include<stdio.h>
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long int a,b;

    while(scanf("%lld %lld",&a,&b) == 2)
    {
        if(a>b)
        {
            printf("%lld\n",a-b);
        }
        else
        {
            printf("%lld\n",b-a);
        }
    }

    return 0;
}
