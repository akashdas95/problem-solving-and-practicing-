#include<bits/stdc++.h>
using namespace std;


//GFG version when row is only sorted
/*main()
{
    int r,c,k;
    cin>>r>>c>>k;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    int i=0,j=c-1;
    bool flag=false;
    while(i<r && j>=0)
    {
        if(arr[i][j]==k)
        {
            flag=true;
            break;
        }
        else if(arr[i][j]> k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(flag)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}*/




//Leetcode version when row and column both are sorted
main()
{
    int r,c,k;
    cin>>r>>c>>k;
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    int l =0,h =(r*c)-1;
    bool flag=false;
    while(l<=h)
    {
        int mid= l+(h-l)/2;
        if(arr[mid/c][mid%c]== k)
        {
            flag=true;
            break;
        }
        else if(arr[mid/c][mid%c]>k)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(flag)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
