#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int i,j,tc,n;
    long long k;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d",&n);
        scanf("%ll",&k);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        int mx=-2e9;
        if(k%2==0)
        {
            for(j=0; j<n; j++)
            {
                if(a[j]>mx)
                {
                    mx=a[j];
                }
            }
            for(j=0; j<n; j++)
            {
                a[j]=mx-a[j];
            }
        }
        for(j=0;j<n;j++)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}
