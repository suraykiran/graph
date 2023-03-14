vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>inde(V,0);
	    vector<int>v;
	    for(int i=0;i<V;i++)
	    {
	        for(auto x:adj[i]){
	            inde[x]++;
	        }
	    }
	     queue<int>q;
	    for(int i=0;i<V;i++)
	    {
	        if(inde[i]==0) q.push(i);
	    }
	    while(!q.empty())
	    {
	        int t=q.front();
	        q.pop();
	        v.push_back(t);
	        for(auto x:adj[t])
	        {
	            inde[x]--;
	            if(inde[x]==0) q.push(x);
	        }
	    }
	    return v;
	}
};
// toposort dfs
class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	void dfs(int node,vector<int>adj[],vector<int>&vis,stack<int>&s){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            dfs(it,adj,vis,s);
	        }
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int>vis(V,0);
	   stack<int>s;
	   for(int i=0;i<V;i++){
	       if(!vis[i]){
	           dfs(i,adj,vis,s);
	       }
	   }
	   vector<int>topo;
	   while(!s.empty()){
	       topo.push_back(s.top());
	       s.pop();
	   }
	   return topo;
	}
};
