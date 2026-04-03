class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int rows = grid.size();
        int cols = grid[0].size();

        int fresh =0;
        int time =0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    fresh++;
                }
                else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty() && fresh>0){  
            //loop through the queue and pop it while adding new oranges
            int qlen = q.size();
            for(int i=0;i<qlen;i++){
                auto curr = q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;

                for(const auto& dir : directions){
                    int row = r+dir.first;
                    int col = c+dir.second;
                    
                    if(row>=0&&col>=0&&row<grid.size()&&col<grid[0].size() && grid[row][col]==1){
                        grid[row][col] = 2;
                        q.push({row,col});
                        fresh--;
                    }
                    
                }
                
            }
            
        time++;
        }
        return fresh==0?time:-1;
    }
};
