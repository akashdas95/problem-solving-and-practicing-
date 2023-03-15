#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
bool vis[N];
vector<int> adj[N];
stack<int>s;

void topologicalSort(int node)
{
    vis[node]=1;

    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(!vis[*it])
        {
            topologicalSort(*it);
        }
    }
    s.push(node);
}

void findTopoSort(int n)
{
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            topologicalSort(i);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }

    findTopoSort(n);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

    return 0;
}
