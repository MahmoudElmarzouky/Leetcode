class Solution {
public:
    vector<int>graph[100005];
    bool vis[100005];
    int nNodes;
    void dfs(int u){
        vis[u]=true;
        for(auto v:graph[u]){
            if(!vis[v]){
                dfs(v);
               nNodes++;
            }
        }
      
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        if(!edges.size())return (n*1ll*(n-1))/2;
         for(int i=0;i<edges.size();++i){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        long long ans=0,comp=0;
        for(int i=0;i<n;i++){
            nNodes=1;
            if(!vis[i]){
                dfs(i);
                ans+=(nNodes*comp);
                comp+=nNodes;
            }
        }
        
       return ans;
    }
};