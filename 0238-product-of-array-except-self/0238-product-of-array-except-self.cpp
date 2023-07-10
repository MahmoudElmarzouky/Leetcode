class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        int product=1,productNozero=1;
        for(int i=0;i<nums.size();++i){
            product*=nums[i];
            if(nums[i]==0){
                zero++;
                continue;
            }
            productNozero*=nums[i];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
             if(zero>1)
              ans.push_back(0);
            else if(zero==1){
                if(nums[i]==0)
                    ans.push_back(productNozero);
                else 
                    ans.push_back(0);
            }else {
                  ans.push_back(product/nums[i]);
            } 
          }
        return ans;
    }
};