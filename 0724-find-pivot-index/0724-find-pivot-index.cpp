class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>cm(nums.size()+1,0);
        cm[0]=nums[0];
        for(int i=1;i<nums.size();++i){
            cm[i]=cm[i-1]+nums[i];
        }
        if(cm[nums.size()-1]-cm[0]==0)return 0;
        for(int i=1;i<nums.size();++i){
            if(cm[i-1]==cm[nums.size()-1]-cm[i])
                return i;
        }
        return (cm[nums.size()-1]-cm[0]==0)?0:-1;
    }
};