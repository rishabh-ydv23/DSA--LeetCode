class Solution {
    public int subarraySum(int[] arr, int k) {
        HashMap<Integer, Integer>mp=new HashMap<>();
        mp.put(0,1);
        int count=0;
        int sum=0;
        int n=arr.length;

        for(int i=0;i<n;i++){
            sum+=arr[i];

            if(mp.containsKey(sum-k)){
                count+=mp.get(sum-k);
            }
            mp.put(sum,mp.getOrDefault(sum,0)+1);
        }
        return count;
    }
}