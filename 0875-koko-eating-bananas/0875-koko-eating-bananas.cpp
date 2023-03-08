class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left=1,right=1e18,ans=0;
        while(left<=right){
            long long mid=(left+right)/2;
            if(can(mid,piles,h)){
                right=mid-1;
                ans=mid;
            }else 
                left=mid+1;
        }
        return ans;
    }
    bool can(int mid,vector<int>& piles, long long h){
        for(int i=0;i<piles.size();i++){
            h-=ceil((double)piles[i]/mid);
            if(h<0)return false;
        }
        return true;
    }
};