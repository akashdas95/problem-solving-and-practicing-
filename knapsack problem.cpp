#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[], int w[], int n, int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(w[n-1]>W)
    {
        return knapsack(value,w,n-1,W);
    }

    return max(value[n-1] + knapsack(value,w,n-1,W-w[n-1]),knapsack(value,w,n-1,W));
}

int main()
{
    int n;
    cout<<"how many item you want to put "<<endl;
    cin>>n;
    int value[n],w[n];
    cout<<"enter the value of items "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
    }
    cout<<"enter the weight of items"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
    int W;
    cout<<"enter your knapsack size "<<endl;
    cin>>W;
    cout<<knapsack(value,w,n,W);
    return 0;
}
