class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxLen=0;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            int maxFreq=0;
            for(int j=i;j<n;j++){
                freq[s[j]-'A']++;
                maxFreq=max(maxFreq,freq[s[j]-'A']);
                int windowSize=j-i+1;
                int change=windowSize - maxFreq;
                if(change<=k){
                    maxLen=max(maxLen,windowSize);
                }
            }
        }
        return maxLen;
    }
};