class Solution {
    int cm[100005];
public:
    int maxVowels(string s, int k) {
        for(int i=0;i<s.size();i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
              cm[i+1]=1;
        }
      for(int i=1;i<=s.size();++i)
          cm[i]+=cm[i-1];
        int l=1,r=k,ans=0;
        while(r<=s.size()){
          ans=max(ans,cm[r]-cm[l-1]);
            r++,l++;
        }
        return ans;
    }
};