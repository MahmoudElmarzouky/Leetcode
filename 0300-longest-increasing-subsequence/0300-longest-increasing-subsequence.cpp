class Solution {
    int dp[2505][2505];
    int solve(int i, int prev,vector<int>& nums){
        if(i==nums.size())
            return 0;
        int& ret=dp[i][prev];
        
        if(ret!=-1)return ret;
        
        int ch1=solve(i+1,prev,nums);
        int ch2=0;
        if(prev==nums.size() || nums[i]>nums[prev])
          ch2=solve(i+1,i,nums)+1;
        
        return ret=max(ch1,ch2);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        return solve(0,nums.size(),nums);
    }
};