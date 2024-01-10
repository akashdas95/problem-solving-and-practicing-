#include "bits/stdc++.h"
using namespace std;


//brute force
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+ arr[j]+ arr[k] == 0)
                {
                    vector<int>temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>v(st.begin(),st.end());
    for(int i=0;i<=v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}*/


//better
/*main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        set<int>hashset;
        for(int j=i+1;j<n;j++)
        {
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third)!= hashset.end())
            {
                vector<int>temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>>v(st.begin(),st.end());

    for(int i=0;i<=v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}*/


//optimized
main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    vector<vector<int>>v;

    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i] == arr[i-1])
        {
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
           int sum = arr[i]+arr[j]+arr[k];
           if(sum > 0)
           {
              k--;
           }
           else if(sum < 0)
           {
              j++;
           }
           else
           {
               vector<int> temp = {arr[i],arr[j],arr[k]};
               v.push_back(temp);
               j++,k--;
               while(j<k && arr[j]== arr[j-1])
               {
                   j++;
               }
               while(j<k && arr[k]== arr[k+1])
               {
                   k--;
               }
            }
        }
    }

    for(int i=0;i<=v.size();i++)
    {
        for(int j=0;j<=v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}






