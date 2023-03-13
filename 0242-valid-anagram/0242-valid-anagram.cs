public class Solution {
    public bool IsAnagram(string s, string t) {
        if(t.Length!=s.Length)return false;
        int n=s.Length;
        var frequencyS=new int[28];
        var frequencyT=new int[28];
        for(int i=0;i<n;++i){
          frequencyS[s[i]-'a']++;
          frequencyT[t[i]-'a']++;
        }
          for(int i=0;i<n;++i){
          if(frequencyS[t[i]-'a']!=frequencyT[t[i]-'a'])
              return false;
        }
        return true;
    }
}