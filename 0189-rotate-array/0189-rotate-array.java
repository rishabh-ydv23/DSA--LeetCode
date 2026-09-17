class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        int[] arr=nums.clone();
        // nums[n]=arr[0];
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=arr[i];
        }
    }
}