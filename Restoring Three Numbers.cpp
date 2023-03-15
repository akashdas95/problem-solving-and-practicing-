#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,arr[10];
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);

    }
    sort(arr,arr+4);
    printf("%d %d %d",arr[3]-arr[1],arr[3]-arr[2],arr[3]-arr[0]);
    return 0;
}
