class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int directions[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
        int time =0;
        int fresh = 0;
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int,int>> q;
        for(int i =0; i< row;i++){
            for(int j =0; j< col;j++){
                if(grid[i][j] == 1){
                    fresh++;
                }
                if(grid[i][j]==2){
                    q.push({i,j});
                }

            }
        }

        while(!q.empty() && fresh >0){
            int length = q.size();
            for(int i = 0 ; i< length ;i++){
                auto cur = q.front();
                q.pop();
                int r = cur.first;
                int c = cur.second;

                for(const auto& d : directions){
                    int nr = d[0]+ r;
                    int nc = c + d[1];
                    if(nr >=0 && nc >= 0 && nr < grid.size() && nc <grid[0].size() && grid[nr][nc] == 1){
                        grid[nr][nc]= 2;
                        q.push({nr,nc});
                        fresh--;
                    }
                } 
            }
            time++;
        }
        return fresh ==0 ? time : -1;

        
    }
};
