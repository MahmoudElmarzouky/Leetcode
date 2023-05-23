class Solution {
    int fr1[1005],fr2[1005];
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        for(int i:nums1){
            fr1[i]++;
        }
        for(int i:nums2){
            fr2[i]++;
        }
        int sz1=nums1.size();
        int sz2=nums2.size();
        vector<int>ans;
        if(sz1<sz2){
            for(int i:nums1){
                if(fr2[i]){
                ans.push_back(i);
                    fr2[i]--;
                }
            }
        }else {
             for(int i:nums2){
                if(fr1[i]){
                ans.push_back(i);
                    fr1[i]--;
                }
            }
        }
        return ans;
    }
};