class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate;
        for(int x:nums){
            if(count==0){
                candidate=x;
            }
            if(candidate==x){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};