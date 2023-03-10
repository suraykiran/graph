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
