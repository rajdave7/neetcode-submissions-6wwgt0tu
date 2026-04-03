class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    islands++;
                    
                }
            }
        }
        return islands;
    }

    void dfs(vector<vector<char>>& grid, int i, int j){
        if(j<0||i<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0' ){
            return;
        }
        grid[i][j]='0';

        dfs(grid, i+1,j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
        dfs(grid, i-1, j);
    }





};
