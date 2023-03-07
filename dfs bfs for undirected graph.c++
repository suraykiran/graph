#include<bits/stdc++.h>
using namespace std;
void bfs(int node,vector<int>adj[],vector<int>&vis)
{
  queue<int>q;
  q.push(node);
  vis[node]=1;
  while(!q.empty())
  {
    node=q.front();
    cout<<node<<" ";
    q.pop();
    for(auto it:adj[node]){
      if(!vis[it]){
        q.push(it);
        vis[it]=1;
      }
    }
  }
}
void dfs(int node,vector<int>adj[],vector<int>&vis)
{
  vis[node]=1;
  cout<<node<<" ";
  for(auto it:adj[node]){
    if(!vis[it]){
      dfs(it,adj,vis);
    }
  }
}
int main()
{
  int n,e;
  cin>>n>>e;
  vector<int>adj[n+1];
  vector<int>vis(n+1,0);
  int u,v;
  for(int i=0;i<e;i++)
  {
     cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
     
  }
  for(int i=1;i<=n;i++)
  {
      if(!vis[i])
      {
          bfs(i,adj,vis);
          dfs(i,adj,vis);
      }
  }

}
