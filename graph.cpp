#include<bits/stdc++.h>
using namespace std;

void adjList(vector<int>adj[], int n)
{
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void printList(vector<int>adj[], int n)
{
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<"->";
        for(auto x: adj[i])
        {
            cout<<x;
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> adj[n+1];

    adjList(adj,n);
    printList(adj,n);

    return 0;
}
