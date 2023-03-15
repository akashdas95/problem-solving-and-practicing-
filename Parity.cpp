#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b,k,n,tc;
    scanf("%d %d",&b,&k);
    int arr[1000005];
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(i=0;i<k-1;i++)
    {
        if(b%2==1&&arr[i]%2==1)
        {
            cnt++;
        }
    }
    if(cnt%2==0&&arr[k-1]%2==1)
    {
        printf("odd");
    }
    else if(cnt%2==1&&arr[k-1]%2==0)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}

