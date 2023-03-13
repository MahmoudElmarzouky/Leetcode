class Solution {
    int frS[28],frT[28];
public:
    bool isAnagram(string s, string t) {
        
       if(s.length()!=t.length())return false;
        
        for(int i=0;i<s.length();++i){
            frS[s[i]-'a']++;
            frT[t[i]-'a']++;
        }
        
        for(int i=0;i<t.length();++i){
            if(frS[t[i]-'a']!=frT[t[i]-'a'])return false;
        }
        return true;
    }
};