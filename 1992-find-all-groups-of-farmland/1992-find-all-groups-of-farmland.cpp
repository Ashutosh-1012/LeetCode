class Solution {
public:
    vector<int>x = {0,1,0,-1};
    vector<int>y = {1,0,-1,0};
    int a=0,b=0,m,n;
    void dfs(vector<vector<int>>& land, int i , int j){
        if(i < 0 || i>= n || j < 0 || j >= m) return;
        if(land[i][j] == 0) return;
        land[i][j] = 0;
        a = max(a,i);
        b = max(b,j);
        for(int d = 0 ; d < 4 ; d++){
            dfs(land, x[d]+i , j+y[d]);
        }
        return;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        n = land.size();
        m = land[0].size();
        vector<vector<int>>ans;
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
                if(land[i][j] == 1){
                    dfs(land,i,j);
                    ans.push_back({i,j,a,b});
                    a=0,b=0;
                }
        return ans;
    }
};