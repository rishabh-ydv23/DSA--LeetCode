class Solution {
    public void reverseString(char[] s) {
        StringBuilder sb=new StringBuilder(new String(s));
        sb.reverse();
        for(int i=0;i<sb.length();i++){
            s[i]=sb.charAt(i);
        }
    }
}