class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()<=2)
            return nums.size();
         int n = nums.size();
        int idx=2;
       for(int i=2;i<n;++i){
           if(nums[i]!=nums[idx-2])
               nums[idx++]=nums[i];
       }
      return idx;
    }
};