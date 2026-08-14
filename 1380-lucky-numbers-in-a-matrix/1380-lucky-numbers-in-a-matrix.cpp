class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>minRow(m,INT_MAX);
        vector<int>maxCol(n,INT_MIN);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // if(matrix[i][j]<minRow[i]){
                //     minRow[i]=matrix[i][j];
                // }
                minRow[i]=min(matrix[i][j], minRow[i]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxCol[i]=max(maxCol[i],matrix[j][i]);
            }
        }

        vector<int>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==minRow[i] && matrix[i][j]==maxCol[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
            
        }

        return ans;
    }
};