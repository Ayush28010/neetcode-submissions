class Solution {
public:
    int direction[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int islands =0;

        for(int i = 0; i < row; i++){
            for(int j =0; j < col ; j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    islands++;
                }
            }
           
        }
         return islands;
    }

    void dfs(vector<vector<char>>& grid, int row, int col){
        if(row < 0 || col <0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == '0'  ){
            return;
        } 
        
        grid[row][col] = '0';
        for(int i =0;i<4;i++){
            dfs(grid, row+direction[i][0],col+direction[i][1]);
        }

    }
};
