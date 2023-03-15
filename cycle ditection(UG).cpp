#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
bool vis[N];
vector<int> adj[N];


bool checkCycle(int node, int parent)
{
    vis[node]=1;
    for(auto it : adj[node])
    {
        if(it!=parent)
        {
            if(vis[it])
            {
                return true;
            }
            else
            {
                if(checkCycle(it,node))
                {
                    return true;
                }
            }
        }
    }
    return false;
}


int main()
{
    int n,m;
    cin>>n>>m;

    int x,y;
    bool cycle = false;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            if(checkCycle(i,-1))
            {
                cycle = true;
            }
        }
    }

    if(cycle)
    {
        cout<<"cycle detected";
    }
    else
    {
        cout<<"no cycle detected";
    }
    return 0;
}
