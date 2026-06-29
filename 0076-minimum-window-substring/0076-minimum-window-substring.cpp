class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        if(t.length()>n)return "";

        unordered_map<char,int>mp;
        for(char ch:t){
            mp[ch]++;
        }

        int requiredCount=  t.length();
        int i=0,j=0;

        int minWindowSize=INT_MAX;
        int start_i=0;

        while(j<n){
            char ch=s[j];                       //mp[A]>0

//mp[A]>0  --Ye A hume sach me chahiye tha. --Agar next A fir aa jaye-False AXdec
            if(mp[ch]>0)                    
                requiredCount--;

// Har character ko map me minus karte hain. Window me A a gaya Negative matlab Extra character
            mp[ch]--;

            while(requiredCount==0){        //Window ko shrink karte hain.
            //shrinking
                int currWindowSize=j-i+1;
                if(minWindowSize > currWindowSize){
                    minWindowSize=currWindowSize;
                    start_i=i;
                }

// A=0 Ab A remove kar diya.A=1 Matlab Ab A dobara chahiye.
                mp[s[i]]++;

// A=1 mp[A]>0  Window me required A missing ho gaya.

                if(mp[s[i]]>0){
                    requiredCount++;
                }
                i++;
            }
            j++;
        }
        return minWindowSize==INT_MAX ? "" : s.substr(start_i,minWindowSize);
    }
};