class Solution {
public:

    int helper(int r,int c,vector<vector<int>>& grid){
        int row=grid.size();
        int col=grid[0].size();
        if(r<0 || r>=row||c<0||c>=col|| grid[r][c]==0){
            return 0;
        }
        int currentGold=grid[r][c];
        grid[r][c]=0;

        int dwn=helper(r+1,c,grid);
        int up=helper(r-1,c,grid);
        int rght=helper(r,c+1,grid);
        int lft=helper(r,c-1,grid);

        grid[r][c]=currentGold;

        return currentGold+max({dwn,up,rght,lft});
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int maxGold=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               if(grid[i][j]>0){
                maxGold=max(maxGold,helper(i,j,grid));
               }
            }
        }

        return maxGold;
    }
};