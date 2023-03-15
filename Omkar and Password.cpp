#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int arr[N];
int main()
{
    int i,j,tc,n;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        bool ans=false;
        for(j=1; j<n; j++)
        {
            if(arr[j]!=arr[j-1])
            {
                ans=true;
                break;
            }

        }
        if(ans==true)
        {
           printf("1\n");
        }
        else
        {
           printf("%d\n",n);
        }

    }
    return 0;
}
