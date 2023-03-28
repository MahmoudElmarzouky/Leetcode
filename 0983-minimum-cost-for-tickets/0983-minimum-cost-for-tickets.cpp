class Solution {
    int dp[366];
    int n;
public:
    int solve(int i,vector<int>& days,vector<int>& costs){
        
        if(i>=n)return 0;
        
        int &ret=dp[i];
        if(ret!=-1)
            return ret;
        
        int chose1=costs[0]+solve(i+1,days,costs);
        
        int chose7=0,j;
        for( j=i;j<n&&days[j]<days[i]+7;++j);
            chose7=costs[1]+solve(j,days,costs);
        
        int chose30=0;
        for(j=i;j<n&&days[j]<days[i]+30;++j);
            chose30=costs[2]+solve(j,days,costs);
        
        return ret=min({chose1,chose7,chose30});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
         n=days.size();
         memset(dp,-1,sizeof dp);
         return solve(0,days,costs);
    }
};