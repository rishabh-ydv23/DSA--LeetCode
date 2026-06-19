class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int maxi=0;
        vector<int>prefix(n);
        prefix[0]=gain[0];
        for(int i=1;i<n;i++){
            prefix[i]=gain[i]+prefix[i-1];
        }
        
        for(int i=0;i<n;i++){
            maxi=max(maxi,prefix[i]);
        }
        return maxi;
    }
};

// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
//         int maxi = 0;
//         int sum = 0;

//         for(int i = 0; i < gain.size(); i++) {
//             sum += gain[i];
//             maxi = max(maxi, sum);
//         }

//         return maxi;
//     }
// };