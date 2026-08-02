class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int currMaxSum=nums[0];
        int maxSum=nums[0];
        int currMinSum=nums[0];
        int minSum=nums[0];

        for(int i=1;i<n;i++){
            currMaxSum=max(nums[i],currMaxSum+nums[i]);
            maxSum=max(maxSum,currMaxSum);

            currMinSum=min(nums[i],currMinSum+nums[i]);
            minSum=min(minSum,currMinSum);
        }

        return abs(maxSum) > abs(minSum) ? abs(maxSum): abs(minSum);
    }
};