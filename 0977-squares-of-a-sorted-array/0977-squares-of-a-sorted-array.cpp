class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        int j = n - 1;
        int idx = n - 1;

        vector<int> ans(n, 0);

        while(i <= j) {
            if(nums[i] * nums[i] > nums[j] * nums[j]) {
                ans[idx] = nums[i] * nums[i];
                i++;
            }
            else {
                ans[idx] = nums[j] * nums[j];
                j--;
            }

            idx--;
        }

        return ans;
    }
};