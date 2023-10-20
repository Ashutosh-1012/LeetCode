class Solution {
    
public:
    bool isValid(int i,int j,int n,int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
    int minCost(vector<vector<int>>& grid) {
        vector<pair<int,int>>mov={{-1,0},{0,1},{0,-1},{1,0}};
        int ans=1e9;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        set<pair<int,int>>st;
        q.push({0,{0,0}});
        st.insert({0,0});
        while(q.empty()==false){
            auto it=q.top();
            st.insert({it.second.first,it.second.second});
            q.pop();
            if(it.second.first==grid.size()-1 && it.second.second==grid[0].size()-1){
                ans=min(ans,it.first);
                break;
            }
            pair<int,int>p={0,0};
            if(grid[it.second.first][it.second.second]==1){
                p={0,1};
            }
            else if(grid[it.second.first][it.second.second]==2){
                p={0,-1};
            }
            else if(grid[it.second.first][it.second.second]==3){
                p={1,0};
            }
            else{
                p={-1,0};
            }
            p.first+=it.second.first;
            p.second+=it.second.second;
            if(isValid(p.first,p.second,grid.size(),grid[0].size()) && st.find({p.first,p.second})==st.end()){
                q.push({it.first,{p.first,p.second}});
                st.insert({p.first,p.second});
            }
            
          
                
                for(auto x:mov){
                    if(isValid(it.second.first+x.first,it.second.second+x.second,grid.size(),grid[0].size()) && st.find({it.second.first+x.first,it.second.second+x.second})==st.end()){
                        q.push({it.first+1,{it.second.first+x.first,it.second.second+x.second}});
                       
                  
                    }
                }
         
        }
        return ans;
    }
};