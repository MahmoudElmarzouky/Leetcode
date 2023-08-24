class Solution {
    int dp[100005];
    vector<int>temp;
    int N;
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
      memset(dp,-1,sizeof dp);
        N=offers.size();
        sort(offers.begin(),offers.end());
        for(auto it:offers){
            temp.push_back(it[0]);
        }
      return solve(0,offers);
    }
    int solve(int i, vector<vector<int>>& offers){
     if(i>=N)return 0;
     int &ret=dp[i];
     if(ret!=-1)
         return ret;
     int ch1=solve(i+1,offers);
     int next=lower_bound(temp.begin(),temp.end(),offers[i][1]+1)-temp.begin();
     int ch2=solve(next,offers)+offers[i][2];
     return ret=max(ch1,ch2);
    }
};