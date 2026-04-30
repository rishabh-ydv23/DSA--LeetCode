class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int majority=nums[0];

        for(int i=0;i<n;i++){
            if(count==0){
                majority=nums[i];
                count=1;
            }else if(majority==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return majority;
    }
};