class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int ele:nums){
            mp[ele]++;
        }
        int ans;
        for(auto num:mp){
            if(num.second==1){
               ans=num.first;
            }
        }
        return ans;
    }
};