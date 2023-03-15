#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];


int main()
{
    /*int n,m;
    cin >>n >>m;

    /*for(int i=0;i<=n; i++){
        vis[i]=false;
    }

    int x,y;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source;
    cin>>source;

    queue<int>q;
    q.push(source);
    vis[source]=true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node;

        vector<int> :: iterator it;
        for(it = adj[node].begin(); it!= adj[node].end(); it++){   //here *it can be called as current
           if(vis[*it]==0){
              vis[*it] = 1;
              q.push(*it);
           }
        }
     }*/


     int n,m;
     cin>>n>>m;

     int x,y;
     for(int i=0; i<m; i++)
     {
         cin>>x>>y;

         adj[x].push_back(y);
         adj[y].push_back(x);
     }

     int source;
     cin>>source;

     queue<int>q;
     q.push(source);
     vis[source]=1;

     while(!q.empty())
     {
         int node= q.front();
         q.pop();
         cout<<node;


         vector<int> :: iterator it;
         for(it=adj[node].begin(); it!=adj[node].end();it++)
         {
             if(!vis[*it])
             {
                 vis[*it]=1;
                 q.push(*it);
             }
         }
     }

    return 0;
}

