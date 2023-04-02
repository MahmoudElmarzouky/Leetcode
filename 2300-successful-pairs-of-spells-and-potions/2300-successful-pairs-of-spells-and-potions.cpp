class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       int n=spells.size(),m=potions.size();
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            if(spells[i]>=success)
            {
                ans.push_back(m);
                continue;
            }
            int index=lower_bound(potions.begin(),potions.end(),ceil(success/(double)spells[i]))-potions.begin();
           if(index==m)ans.push_back(0);
            else 
              ans.push_back(m-index);  
            }
    return ans;
    }
};