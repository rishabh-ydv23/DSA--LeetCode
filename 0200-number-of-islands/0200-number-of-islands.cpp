class Solution {
public:
    int m,n;

    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=m || j>=n || j<0 || grid[i][j] == '0'){
            return;
        }

        grid[i][j]='0';     //// Mark current cell as visited
        dfs(grid,i + 1, j); // Down ↓

        dfs(grid,i - 1, j); // Up ↑
        
        dfs(grid,i, j + 1); // Right →
        
        dfs(grid,i, j - 1); // Left ←

    }

    int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int island=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    island++;
                    dfs(grid, i, j);
                }
            }
        }
        return island;
    }
};