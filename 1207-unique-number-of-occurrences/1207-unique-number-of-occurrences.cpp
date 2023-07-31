class Solution {
    map<int,int> fr;
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>st,check;
        for(int i : arr){
            fr[i]++;
            st.insert(i);
        }
        for(int i : st){ 
            check.insert(fr[i]);
        }
        return st.size()==check.size();
    }
};