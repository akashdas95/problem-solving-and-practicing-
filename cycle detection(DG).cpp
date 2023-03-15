#include<bits/stdc++.h>//unfinished
using namespace std;

const int N = 1e4+2;
vector<bool>vis(N,0);
vector<int>adj[N];
vector<bool>stk;


bool checkCycle(int node)
{
    stk[node]=true;
    vis[node]=true;
    for(auto it: adj[node])
    {
        if(!vis[it] && checkCycle(it))
        {
            return true;
        }
        else if(stk[it]==1)
        {
            return true;
        }
    }
    stk[node]=false;
    return false;
}


int main()
{
    int n,m;
    cin>>n>>m;
    bool cycle = false;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }

    for(int i=0; i<n; i++)
    {
        if(!vis[i] && checkCycle(i))
        {
            cycle=true;
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
