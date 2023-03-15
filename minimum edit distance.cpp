#include "bits/stdc++.h"//not Completed
using namespace std;



main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+2][m+2];
    char s1[50],s2[50];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>s2[i];
    }
    for(int i=0;i<n+1;i++)
    {
        arr[i][0]=i;
    }
    for(int j=0;j<m+1;j++)
    {
        arr[0][j]=j;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                arr[i][j] = arr[i-1][j-1];
            }
            else
            {
                arr[i][j] = 1 + min({arr[i-1][j-1],arr[i-1][j],arr[i][j-1]});
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<arr[n][m];
    return 0;
}
