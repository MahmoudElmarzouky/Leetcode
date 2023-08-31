class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>a(n);
        int idx=0;
        for(int i=n-k;i<n;++i){
            a[idx++]=nums[i];
        }
        for(int i=0;i<n-k;i++){
            a[idx++]=nums[i];
        }
        nums=a;
    }
};