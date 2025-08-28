class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=m-1;i>0;i--){
            // for(int j=0;j<n;j++){
                int a=0,b=i;
                vector<int>temp;
                while(a<n and b<m){
                    temp.push_back(grid[a][b]);
                    a++;
                    b++;
                    
                }
                
                // cout<<endl;
                sort(temp.begin(),temp.end());
                a=0;b=i;
                int k=0;
                while(a<n and b<m){
                    grid[a][b]=temp[k];
                    // cout<<grid[a][b];
                    a++;
                    b++;
                    k++;
                }
            // cout<<endl;
        }
          for(int i=n-1;i>=0;i--){
            // for(int j=0;j<m;j++){
                 int a=i,b=0;
                vector<int>temp;
                while(a<n and b<m){
                    temp.push_back(grid[a][b]);
                    a++;
                    b++;
                }
                sort(temp.begin(),temp.end(),greater<>());
                a=i;b=0;
                int k=0;
                while(a<n and b<m){
                    grid[a][b]=temp[k];
                    a++;
                    b++;
                    k++;
                }
            // }
            }
          
        return grid;
    }
};