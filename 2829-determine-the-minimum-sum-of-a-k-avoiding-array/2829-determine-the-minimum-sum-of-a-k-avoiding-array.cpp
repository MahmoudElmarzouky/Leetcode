class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_set<int>kAvoiding;
        int i=1;
        while(kAvoiding.size()<n){
            if(kAvoiding.count(k-i)){
                i++;
                continue;
            }
            kAvoiding.insert(i);
            i++;
        }
        int ans=0;
        for(auto i : kAvoiding){
            ans+=i;
        }
        return ans;
    }
};