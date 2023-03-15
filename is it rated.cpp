#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,tc;
    scanf("%d",&n);
    tc=n*3;
    int arr[tc];
    for(i=0; i<n*2; i++)
    {
        scanf("%d",&arr[i]);
    }
    bool flag1=false;
    for(i=1; i<n*2; i+=2)
    {
        if(arr[i]!=arr[i-1])
        {
            flag1=true;

        }
    }
    if(flag1==true)
    {
        printf("rated");
    }
    else
    {
        for(i=1; i<n*2; i+=2)
        {
            if(arr[i]>=arr[i+2])
            {

            }
            else
            {
                flag1=true;
            }
        }
        if(flag1==false)
        {
            printf("maybe");
        }
        else
        {
            printf("Unrated");
        }
    }

    return 0;
}

