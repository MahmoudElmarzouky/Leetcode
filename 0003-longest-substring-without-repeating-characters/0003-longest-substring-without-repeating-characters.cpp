class Solution {
    unordered_map<char,int>fr;
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1)return s.length();
        int l=0,r=1,ans=1;
        fr[s[0]]++;
        while(r<s.length()&&l<s.length()){
            if(fr[s[r]]+1>1){
                fr[s[l]]--;
                l++;
            }else {
                fr[s[r]]++;
                r++;
                ans=max(ans,r-l);
            }
        }
        return ans;
    }
};