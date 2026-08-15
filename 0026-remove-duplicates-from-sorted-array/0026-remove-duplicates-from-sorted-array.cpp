class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=1;
        int n=nums.size();

        while(i<n && j<n){
            while(j<n && nums[i]==nums[j]){
                j++;
            }

            if(j<n){
                i++;
                nums[i]=nums[j];
                k++;
            }
        }
        return k;
    }
};