#include<bits/stdc++.h>
using namespace std;

const int n = 1e6+2;
vector<int> adj[n];
vector<int> indeg(n,0);
vector<int> sortedArr;//for detect cycle
queue<int> q;

void topologicalSort(int n)
{
    /*for(int i=0;i<n;i++)
    {
        for(auto it: adj[i])
        {
            indeg[it]++;
        }
        //cout<<indeg[i]<<" ";
    }*/
    for(int i=0;i<n;i++)
    {
        if(!indeg[i])
        {
            q.push(i);
        }
    }
    //cout<<"\n";
    while(!q.empty())
    {
        int node= q.front();
        q.pop();
        cout<<node<<" ";
        sortedArr.push_back(node);
        for(auto it: adj[node])
        {
            indeg[it]--;
            if(!indeg[it])
            {
                q.push(it);
            }
        }
    }
}


main()
{
    int n,m;
    cin>>n>>m;

    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }


    topologicalSort(n);
    //vector<int> :: iterator it;
    /*for(it=sortedArr.begin();it!=sortedArr.end();it++)
    {
        cout<<sortedArr[*it]<<" ";
    }*/
    cout<<"\n";
    if(sortedArr.size()==n)
    {
        cout<<"no cycle detected";
    }
    else
    {
        cout<<"cycle detected";
    }
    //cout<<sortedArr.size();
    return 0;
}
