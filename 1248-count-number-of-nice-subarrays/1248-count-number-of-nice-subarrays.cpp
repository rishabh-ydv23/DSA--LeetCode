
// Hum prefix me oddCount track karte hain aur har step pe check karte hain ki kya past me aisa prefix exist karta hai jiska oddCount = current oddCount - k ho — agar haan, to utne subarrays mil jate hain jinke andar exactly k odd numbers hain.

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int oddCount=0;
        int result=0;

        mp[oddCount]=1;

        for(int i=0;i<n;i++){
            oddCount+=(nums[i]%2);

            if(mp.count(oddCount-k)){
                result+=mp[oddCount-k];
            }
            mp[oddCount]++;
        }
        return result;
    }
};