class Solution {
public:
    void dfs(int a, vector<vector<int>>ans,vector<int>&vis){
        vis[a]=1;
        for(auto i:ans[a]){
            if(!vis[i]){
                dfs(i,ans,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
         int n=isConnected.size();
        vector<vector<int>>ans(n);
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 and i!=j){
                    ans[i].push_back(j);
                    ans[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,ans,vis);
                cnt++;
            }
        }
        return cnt;
    }
};