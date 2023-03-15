#include<bits/stdc++.h>//AC
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start=0,sum=arr[0];
    bool flag = false;
    for(int i=1; i<n; i++)
    {
        while(sum > s )
        {
            sum-=arr[start];
            start++;
        }
        if(sum == s)
        {
            flag=true;
            cout<< start <<" and "<< i-1;
            break;
        }
        sum+=arr[i];
    }
    if(flag==false)
    {
       cout<<"no subarrary found";
    }
    return 0;
}
