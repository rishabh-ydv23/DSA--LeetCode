class Solution {
    public String reverse(String s){
        StringBuilder sb=new StringBuilder(s);
        int i=0,j=s.length()-1;
        while(i<j){
            char temp=sb.charAt(i);
            sb.setCharAt(i, sb.charAt(j));
            sb.setCharAt(j, temp);
            i++;
            j--;
        }
        s=sb.toString();
        return s;
    }

    public String reverseWords(String s) {
        String[] words=s.split(" ");
        String w="";
        String ans="";
        int n=words.length;
        for(int i=0;i<n;i++){
            w=reverse(words[i]);
            ans+=w;
            if(i!=n-1){
                ans+=" ";
            }
        }
        return ans;
    }
    
}