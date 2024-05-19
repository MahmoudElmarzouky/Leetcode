class Solution {
    public int lengthOfLastWord(String s) {
        int cnt=0;
        for(int i=s.length()-1;i>0;--i){
            if(s.charAt(i)==' ')
                continue;
            if(s.charAt(i)!=' '&&s.charAt(i-1)!=' ')
                cnt++;
            if(s.charAt(i)!=' '&&s.charAt(i-1)==' ')
                return cnt+1;
        }
        if(s.charAt(0)!=' ')
            return cnt+1;
        else
            return  cnt;
    }
}