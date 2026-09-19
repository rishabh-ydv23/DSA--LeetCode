class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        int n=s.length();
        int i=n-1;
        int count=0;
        while(s.charAt(i) != ' ' && i>0){
            count++;
            i--;
        }
        if(i==0){
            count++;
        }
        return count;
    }
}