class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        
        vector<int>num(n);
        for(int i=0;i<n;i++){
            num[(i+k)%n]=nums[i];
        }
        nums=num;
    }
};