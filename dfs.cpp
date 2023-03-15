
//DFS algorithm (undirected path) with Recursive approach using pre order.

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
bool vis[N];
vector<int> adj[N];

void dfs(int source)
{
    int node = source;
    cout<<node<<" ";
    vis[node]=1;

    vector<int> :: iterator it;
    for(it=adj[node].begin(); it!=adj[node].end();it++)
    {
        if(!vis[*it])
        {
            dfs(*it);
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
        adj[y].push_back(x);
    }
    int source;
    cin>>source;
    dfs(source);
    return 0;
}
