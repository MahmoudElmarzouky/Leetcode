class Solution {
    vector<int>graph[100005];
    bool vis[100005];
    void dfs(int u){
        vis[u]=true;
        for(auto v:graph[u]){
            if(!vis[v])
                dfs(v);
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        for(int i=0;i<connections.size();++i){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
                ans++;
                }
        }
        return ans-1;
    }
};