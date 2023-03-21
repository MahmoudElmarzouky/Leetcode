class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,numberOfzeroes=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0)
              numberOfzeroes++;
            else {   
                ans+=(numberOfzeroes*(numberOfzeroes+1))/2ll;
                numberOfzeroes=0;
            }
        }
        ans+=(numberOfzeroes*(numberOfzeroes+1))/2ll;
        return ans;
    }
};