#include "bits/stdc++.h"
using namespace std;

main()
{
    int n;
    cin>>n;
    int arr[n];
    vector <int> pos;
    vector <int> neg;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    if(pos.size() > neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
          arr[i*2]= pos[i];
          arr[i*2+1]= neg[i];
        }

        int ind= neg.size()*2;
        for(int i=neg.size() ;i<pos.size(); i++)
        {
            arr[ind] = pos[i];
            ind++;
        }
    }
    else
    {
        for(int i=0;i<pos.size();i++)
        {
          arr[i*2]= pos[i];
          arr[i*2+1]= neg[i];
        }

        int ind= pos.size()*2;
        for(int i=pos.size() ;i<neg.size(); i++)
        {
            arr[ind] = neg[i];
            ind++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
