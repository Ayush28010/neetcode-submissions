class Solution {
    int directions[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int islands=0;
        for(int i =0 ; i< row;i++){
            for(int j =0; j< col;j++){
                if(grid[i][j]=='1'){
                bfs(grid,i, j);
                islands++;}
            }
        }
        return islands;
    }

    void bfs(vector<vector<char>>& grid, int row , int col){
        queue<pair<int,int>> q;
        grid[row][col] = '0';
        q.push({row,col});

        while(!q.empty()){
            auto node = q.front(); q.pop();
            int r = node.first, c = node.second;
            for(int i =0 ; i< 4; i++){
                int nr = r + directions[i][0];
                int nc = c + directions[i][1];
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc]=='1' ){
                    q.push({nr,nc});
                    grid[nr][nc] = '0';
                }
            }
        }
    }

   
};

