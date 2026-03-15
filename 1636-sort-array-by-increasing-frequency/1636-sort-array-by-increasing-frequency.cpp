class Solution {
public:

    struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first)
                return a.second<b.second;       //larger value forst

            return a.first > b.first;       //smaller freq first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;

        for(auto it:freq){
            pq.push({it.second,it.first});
        }

        vector<int>ans;
        while(!pq.empty()){
            int f=pq.top().first;
            int ele=pq.top().second;
            pq.pop();

            for(int i=0;i<f;i++){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};