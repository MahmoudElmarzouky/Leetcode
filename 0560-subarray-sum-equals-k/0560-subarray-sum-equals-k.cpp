class Solution {
   map<int,int>mp;
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int ans=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp[sum-k])
                ans+=mp[sum-k];
            mp[sum]++;           
        }  
      return ans;
    }
};