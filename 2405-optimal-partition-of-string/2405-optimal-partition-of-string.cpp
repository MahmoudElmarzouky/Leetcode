class Solution {
    set<char>st;
public:
    int partitionString(string s) {
        int ans=1;
        for(int i=0;i<s.length();i++){
            if(st.count(s[i])){
                ans++;
             //   s.clear();
                set<char>temp;
                st=temp;
                st.insert(s[i]);
            }else {
                st.insert(s[i]);
            }
        }
        return ans;
    }
};