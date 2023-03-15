#include "bits/stdc++.h"
using namespace std;

const int N=1e4+2;
int kp[N][N];

main()
{
    int n;
    cout<<"size of the item"<<"\n";
    cin>>n;
    int val[n];
    cout<<"enter the value of item:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    int wt[n];
     cout<<"enter the weight of item:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    cout<<"enter the knapsack size"<<"\n";
    int W;
    cin>>W;//size of the bag

    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
            {
                kp[i][w]=0;
            }
            else if(wt[i-1]<=w)
            {
                kp[i][w] = max(kp[i-1][w], kp[i-1][w-wt[i-1]] + val[i-1]);
            }
            else
            {
                kp[i][w]=kp[i-1][w];
            }
        }

    }
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
           cout<<kp[i][w]<<" ";
        }
        cout<<"\n";
    }
    cout<<kp[n][W];
    return 0;
}
