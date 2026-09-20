class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character>smp=new HashMap<>();
        HashMap<Character,Character>tmp=new HashMap<>();
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;

        for(int i=0;i<n;i++){
           char a=s.charAt(i);
           char b=t.charAt(i);

           if(smp.containsKey(a) && smp.get(a)!=b)
                return false;

            if(tmp.containsKey(b) && tmp.get(b)!=a)
                return false;

            smp.put(a,b);
            tmp.put(b,a);
        }
        return true;
    }
}