public class Solution {
    int[] fr=new int[28];
    public int FirstUniqChar(string s) {
      for(int i=0;i<s.Length;i++){
          fr[s[i]-'a']++;
      }
        for(int i=0;i<s.Length;i++){
         if( fr[s[i]-'a']==1)return i;
      }
        return -1;
    }
}