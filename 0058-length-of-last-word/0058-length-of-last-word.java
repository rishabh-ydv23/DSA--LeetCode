class Solution {
    public int lengthOfLastWord(String s) {
        int n=s.length();
        String[] arr=s.split(" ");
        int n2=arr.length;
        String word=arr[n2-1];
        return word.length();
    }
}