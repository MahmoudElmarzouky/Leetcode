class Solution {
    vector<pair<int,int>>graph[100005];
    bool vis[100005];
    int ans=1000000009;
    void dfs(int u,int dis){
       vis[u]=true;
        ans=min(ans,dis);
        for(auto v:graph[u]){
           if(!vis[v.first])
            dfs(v.first,v.second);
            else 
              ans=min(ans,v.second);
        }
    }
public:
    int minScore(int n, vector<vector<int>>& roads) {
        for(int i=0;i<roads.size();++i){
            graph[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            graph[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        dfs(1,1000000009);
        return ans;
        return 5;
    }
};