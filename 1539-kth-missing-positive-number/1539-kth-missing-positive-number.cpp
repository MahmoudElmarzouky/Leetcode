class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>st; 
        int n=arr.size();
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        int c=0,ans;
        for(int i=1;i<=2000;++i){
            if(!st.count(i))
                c++;
            if(c==k){ans= i;
                    break;
            }
        }
        return ans;
    }
};