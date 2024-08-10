class Solution {
    List<String>ans=new ArrayList<String>();
    int n;
    public List<String> generateParenthesis(int n) {
        this.n=n;
        solve(1,"");
        return ans;
    }
    boolean isValid(String s){
     Stack<Character> sk = new Stack<>();
     for(int i=0;i<s.length();++i){
         if(s.charAt(i)=='(')
             sk.push(s.charAt(i));
         else {
             if(sk.empty())return false;
             sk.pop();
         }
     }
        return sk.empty();
    }
    void solve(int i,String s){
        if(i==(n*2)+1){
            if(isValid(s))
                ans.add(s);
         return;
        }
        solve(i+1,s+"(" );
        solve(i+1,s+")" );
    }
}