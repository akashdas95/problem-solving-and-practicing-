#include<bits/stdc++.h>
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
    int row[r];
    int col[c];
    for(int i=0;i<r; i++)
    {
      row[i]=0;
    }
    for(int j=0;j<c; j++)
    {
      col[j]=0;
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


