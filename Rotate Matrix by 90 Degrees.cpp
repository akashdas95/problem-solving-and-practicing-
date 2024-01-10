#include<bits/stdc++.h>
using namespace std;


//brute force
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int ans[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            ans[j][n-1-i] = arr[i][j];
        }
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}




//optimized
/*int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    //matrix transpose
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0; i<n; i++)
    {
        int srt=0;
        int ed =n-1;
        while(srt<ed)
        {
            swap(arr[i][srt],arr[i][ed]);
            srt++;
            ed--;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}*/

