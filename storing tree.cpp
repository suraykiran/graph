#include<bits/stdc++.h>
using namespace std;
{
  int n,e;
  cin>>n>>e;
  int u,v;
  int matrix[n+1][n+1];
  //2 ways to store graph input
  //1st one matrix 2d array
  for(int i=0;i<e;i++)
  {
    cin>>u>>v;
    matrix[u][v]=1;
    matrix[v][u]=1;
  }
  //2nd adjusency list
  vector<int>adj[n+1];
  for(int i=0;i<e;i++)
  {
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
}
