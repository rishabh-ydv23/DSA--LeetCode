class Solution {
public:
    int n,m;

    void dfs(vector<vector<int>>& image, int oldColor,int color, int row,int col){
        n=image.size();
        m=image[0].size();

        if(row < 0 || row >= n || col < 0 || col >= m || image[row][col]!= oldColor){
            return;
        }

        image[row][col]=color;
        dfs(image, oldColor, color, row-1, col);
        dfs(image, oldColor, color, row+1, col);
        dfs(image, oldColor, color, row, col+1);
        dfs(image, oldColor, color, row, col-1);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor=image[sr][sc];

        if(oldColor==color){
            return image;
        }

        dfs(image,oldColor, color, sr,sc);
        return image;
    }
};