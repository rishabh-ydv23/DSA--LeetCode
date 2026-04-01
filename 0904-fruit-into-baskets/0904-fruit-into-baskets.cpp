class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int i=0,r=0;
        int maxCount=0;

        while(r<n){
            mp[fruits[r]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
            }
            maxCount=max(maxCount,r-i+1);
            r++;
        }
        return maxCount;
    }
};