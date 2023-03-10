//undirectd graph
  bool bfs(int child,int parent,vector<int> adj[],vector<int>&vis)
    {
        queue<pair<int,int>>q;
        q.push({child,parent});
        vis[child]=1;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(auto it:adj[x.first])
            {
                 if(!vis[it]){
                     q.push({it,x.first});
                        vis[it]=1;
                  }
                 else
                 {
                    
                    if(x.second!=it) return true;
                 }
            }
        }
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){
                if(bfs(i,-1,adj,vis))return true;
            }
        }
        return false;
    }
};
//directed graph
  bool bfs(int child,int parent,vector<int> adj[],vector<int>&vis)
    {
        queue<pair<int,int>>q;
        q.push({child,parent});
        vis[child]=1;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(auto it:adj[x.first])
            {
                 if(!vis[it]){
                     q.push({it,x.first});
                        vis[it]=1;
                  }
                 else
                 {
                    
                    if(x.second!=it) return true;
                 }
            }
        }
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){
                if(bfs(i,-1,adj,vis))return true;
            }
        }
        return false;
    }
};
