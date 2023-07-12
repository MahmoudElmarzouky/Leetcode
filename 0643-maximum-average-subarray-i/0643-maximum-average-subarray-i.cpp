class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0,ans=0;
       for(int i=0;i<k;++i){
          sum+=nums[i];
      }
        ans=sum/k;
        int l=0,r=k;
      while(r<nums.size()){
         sum-=nums[l++];
         sum+=nums[r++];
          ans=max(ans,sum/k);
      }
        return ans;
    }
};