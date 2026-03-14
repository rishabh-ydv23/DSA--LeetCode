class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }

        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x:freq){
            int elem=x.first,fre=x.second;
            pair<int,int>p={fre,elem};
            pq.push(p);
            // pq.push({x.second,x.first});
            if(pq.size()>k)pq.pop();
        }

        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};