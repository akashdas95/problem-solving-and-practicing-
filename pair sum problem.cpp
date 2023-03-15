#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    bool flag;
    int l=0,h=n-1;
    while(l<h)
    {
        if(arr[l]+arr[h]==k)
        {
            //
            cout<<l<<" and "<<h<<endl;
            flag=true;
            break;
        }
        else if(arr[l]+arr[h]<k)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    if(flag)
    {
        cout<<"pair possible";
    }
    else
    {
        cout<<"pair not possible";
    }
    return 0;
}
