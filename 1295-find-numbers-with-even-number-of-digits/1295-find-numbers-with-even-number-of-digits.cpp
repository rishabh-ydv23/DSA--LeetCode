class Solution {
public:
    
    int evenDigit=0;

    bool isEvenDigit(int num){
        int count=0;
        while(num>0){
            num=num/10;
            count++;
        }
        if(count%2==0){
            return true;
        }
        return false;
    }

    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(isEvenDigit(nums[i])){
                count++;
            }
        }
        return count;
    }
};