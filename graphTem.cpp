#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define n 1000000
vector<int> adj[n],vis(n,0);
void bfs(int src)
{
    vis[src]=1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        // cout<<cur<<" ";
        for(auto child:adj[cur])
        {
            if(!vis[child])
            {q.push(child);
            vis[child]=1;}
        }
    }
}
void dfs(int node)
{
    vis[node]=1;
    cout<<node<<" ";
    for(auto child:adj[node])
    {
        if(!vis[child])
        dfs(child);
    }
  }

void solve()
{
    int node,edge;
    cin>>node>>edge;
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin>>s;
   // dfs(s);
   // bfs(s);
    for(int i=1;i<node;i++)
    vis[i]=0;
    for(int i=1;i<node;i++)
    adj[i].clear();

}
int main()
{
 
return 0;
}