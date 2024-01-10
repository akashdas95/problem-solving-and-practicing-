#include<bits/stdc++.h>//AC
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    int ans=0;

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            if(i-1>=0)
            {
                ans+=arr[i-1][j];
            }
            if(j-1>=0)
            {
                ans+=arr[i][j-1];
            }
            if(i+1<r)
            {
                ans+=arr[i+1][j];
            }
            if(j+1<c)
            {
                ans+=arr[i][j+1];
            }
        }
    }

   cout<<ans;
   return 0;
}


