class Solution {
    map<int,int>mp;
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i:nums)
            mp[i]=1;
        for(int i=1;i<=100000;++i){
            if(mp[i]!=1)
                return i;
        }
        return 100001;
    }
};