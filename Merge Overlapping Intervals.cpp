#include<bits/stdc++.h>
using namespace std;


//brute force
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    return 0;
}
