#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,arr[10],cnt=0;
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+4);
    for(i=0; i<4; i++)
    {
        if(arr[i+1]==arr[i])
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
