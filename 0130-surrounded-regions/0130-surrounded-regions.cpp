class Solution {
public:
    int m,n;

    void dfs(vector<vector<char>>& board, int i, int j){
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!='O')
            return;
        
        board[i][j]='T';

        dfs(board, i+1, j);     //down
        dfs(board, i-1, j);     //up
        dfs(board, i, j+1);     //right
        dfs(board, i, j-1);     //left       
    }

    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();

        //first and last column
        for(int row=0;row<m;row++){
            if(board[row][0]=='O'){
                dfs(board,row,0);//(board,row,column)Row i ke first column (column=0)se DFS start karo
            }

            if(board[row][n-1]=='O'){
                dfs(board,row,n-1);
            }
        }


        //first and last row
        for(int col=0;col<n;col++){
            if(board[0][col]=='O'){
                dfs(board,0,col);
            }

            if(board[m-1][col]=='O'){
                dfs(board,m-1,col);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O'){
                    board[i][j]='X';
                }else if(board[i][j]=='T'){
                    board[i][j]='O';
                }
            }
        }
    }
};