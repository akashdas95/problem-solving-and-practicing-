#include "bits/stdc++.h"
using namespace std;

const int N=1e3+2;
//int lcs[N][N];

/*int LCS(string &s1, string &s2, int n, int m)//recursion with memoization
{
    if(n == 0|| m == 0)
    {
        return 0;
    }
    if(lcs[n][m]!=-1)
    {
        return lcs[n][m];
    }
    if(s1[n-1]==s2[m-1])
    {
        lcs[n][m] = 1+ LCS(s1,s2,n-1,m-1);
    }
    else
    {
        lcs[n][m]= max(LCS(s1,s2,n-1,m),LCS(s1,s2,n,m-1));
    }
    return lcs[n][m];
}*/


main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int lcs[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                lcs[i][j]=0;
            }
            else
            {
                lcs[i][j]=-1;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                lcs[i][j]= 1+lcs[i-1][j-1];
            }
            else
            {
                lcs[i][j]= max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    cout<<lcs[n][m];
    //cout<<LCS(s1,s2,n,m);
    return 0;
}
