class Solution {
    set<char>st;
public:
    int partitionString(string s) {
        
        vector<int> lastSeen(26, -1);
        
        int ans = 1, substringStart = 0;

        for (int i = 0; i < s.length(); i++) {
            if (lastSeen[s[i] - 'a'] >= substringStart) {
                ans++;
                substringStart = i;
            }
            lastSeen[s[i] - 'a'] = i;
        }

        return ans;
    }
};