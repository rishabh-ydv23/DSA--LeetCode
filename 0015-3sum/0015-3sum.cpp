//Yeh code 3Sum problem solve karta hai jisme hume array ke andar aise 3 numbers find karne hote hain jinka sum 0 ho. Sabse pehle array ko sort kiya jata hai taaki two-pointer approach use ho sake. Phir har element ko ek baar fix (leader) kiya jata hai aur uske liye target -nums[i] set kiya jata hai. Baaki ke do numbers ko left aur right pointers se dhunda jata hai—agar sum bada hai to right pointer kam hota hai, chhota hai to left pointer badhta hai. Jab exact match milta hai, triplet result me store kar liya jata hai aur duplicates skip kiye jate hain. End me saare unique triplets return ho jate hain.

class Solution {
public:

    vector<vector<int>>result;

    void twoSum(vector<int>&nums,int target,int i,int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }else if(nums[i]+nums[j]<target){
                i++;
            }else{
                while(i<j && nums[i]==nums[i+1])i++;
                while(i<j && nums[j]==nums[j-1])j--;
                result.push_back({-target,nums[i],nums[j]});
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return {};
        // sort(nums.begin(),nums.end());
        sort(begin(nums),end(nums));
        
        for(int i=0;i<n-2;i++){

            if(i>0 && nums[i]==nums[i-1])continue;

            int n1=nums[i];
            int target=-n1;

            twoSum(nums,target,i+1,n-1);
        }
        return result;  
    }
};