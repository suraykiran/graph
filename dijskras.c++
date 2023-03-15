    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>q;
        q.push({0,S});
        vector<int>vi(V,INT_MAX);
        vi[S] = 0;
        while(!q.empty())
        {
           auto x=q.top();
           q.pop();
           for(auto kt:adj[x.second])
           {
               if(x.first+kt[1]<vi[kt[0]]){
               vi[kt[0]]=x.first+kt[1];
               q.push({kt[1]+x.first,kt[0]});}
           }
        }
        return vi;
    }
};
