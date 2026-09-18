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
        StringBuilder ans=new StringBuilder();
        int n=words.length;

        for(int i=0;i<n;i++){
            ans.append(reverse(words[i]));
            if(i!=n-1){
                ans.append(" ");
            }
        }
        return ans.toString();
    }
    
}